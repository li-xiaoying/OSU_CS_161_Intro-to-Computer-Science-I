/**********************************************************************************
** Author:      Xiaoying Li
** Date:        6/5/2019
** Description: The implementation file for class named FBoard for playing a game,
                where player x is trying to get her piece to row 7 and player o is
                trying to make it so player x doesn't have any legal moves. 
**********************************************************************************/


#include "FBoard.hpp"


/**********************************************************************************
** Description: A default constructor that initializes the array to empty. It then
                puts four o pieces on row 7, in columns 0, 2, 4, and 6, and an x 
                piece on row 0, column 3. It also initializes the other data 
                members.
**********************************************************************************/
FBoard::FBoard()
{
    //Initialize the array to empty
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++)
            board[i][j]='e';
    }

    //Put four o pieces on row 7, in columns 0, 2, 4, and 6
    board[7][0]='o';
    board[7][2]='o';
    board[7][4]='o';
    board[7][6]='o';
    //Put an x piece on row 0, column 3
    board[0][3]='x';
    //Initialize the other data members
    gameState=UNFINISHED;
    xRow=0;
    xColumn=3;
}


/**********************************************************************************
** Description: A method called getGameState that returns the value of gameState.
**********************************************************************************/
State FBoard::getGameState()
{
    return gameState;
}


/**********************************************************************************
** Description: A method called moveX that takes as parameters the row and column 
                of the square to move to. If the desired move is not allowed, or 
                if the game has already been won, it returns false. Otherwise it 
                makes the move and returns true. A piece belonging to x can move 1 
                square diagonally in any direction. A piece is not allowed to move 
                off the board or to an occupied square. If x's move gets her piece 
                to row 7, gameState will be set to X_WON.
**********************************************************************************/
bool FBoard::moveX(int xRowTo, int xColumnTo)
{
    //If the game has already been won
    if (gameState==X_WON || gameState==O_WON)
        return false;

    //If the piece moves off the board 
    else if (xRowTo<0 || xRowTo>=8 || xColumnTo<0 || xColumnTo>=8)
        return false;

    //If the piece moves to an occupied square
    else if (board[xRowTo][xColumnTo] != 'e')
        return false;

    //If the move is legal makes the move and returns true
    else if ((xRowTo==xRow-1 || xRowTo==xRow+1) && 
             (xColumnTo==xColumn-1 || xColumnTo==xColumn+1)){
        board[xRow][xColumn]='e';
        board[xRowTo][xColumnTo]='x';
        xRow=xRowTo;
        xColumn=xColumnTo;
        //If x's move gets her piece to row 7, set gameState to X_WON
        if (xRow==7)
            gameState=X_WON;
        return true;
    }
    
    //Else all illegal moves, return false
    else
        return false;
}


/**********************************************************************************
** Description: A method called moveO that takes as parameters the row and column 
                to move from, and the row and column to move to. If the first pair 
                of coordinates doesn't hold o's piece, or if the desired move is 
                not allowed, or if the game has already been won, it returns false.  
                Othewise it makes the move and returns true. A piece belonging to o 
                can move 1 square diagonally, but the row cannot increase. It is 
                not allowed to move off the board or to an occupied square. If o's 
                move leaves no legal move for x, gameState will be set to O_WON.
**********************************************************************************/
bool FBoard::moveO(int oRow, int oColumn, int oRowTo, int oColumnTo)
{
    //If the game has already been won
    if (gameState==X_WON || gameState==O_WON)
        return false;

    //If the piece moves off the board
    else if (oRow<0 || oRow>=8 || oColumn<0 || oColumn>=8 ||
             oRowTo<0 || oRowTo>=8 || oColumnTo<0 || oColumnTo>=8)
        return false;

    //If the first pair of coordinates doesn't hold o's piece
    else if (board[oRow][oColumn] != 'o')
        return false;

    //If the piece moves to an occupied square
    else if (board[oRowTo][oColumnTo] != 'e')
        return false;

    //If the move is legal makes the move and returns true
    else if ((oRowTo==oRow-1) && (oColumnTo==oColumn-1 || oColumnTo==oColumn+1)){
        board[oRow][oColumn]='e';
        board[oRowTo][oColumnTo]='o';
        oRow=oRowTo;
        oColumn=oColumnTo;
        //Use the helper function to check if o's move leaves no legal move for x, 
        //if so, set gameState to O_WON
        if (checkX())
            gameState=O_WON;
        return true;
    }

    //Else all illegal moves, returns false
    else
        return false;
}


/**********************************************************************************
** Description: Helper function to check if o's move leaves no legal move for x. If 
                there is legal move for x, it returns false. Otherwise, it returns 
                true.
**********************************************************************************/
bool FBoard::checkX()
{
    if (xRow-1>=0 && xRow-1<8 && xColumn-1>=0 && 
        xColumn-1<8 && board[xRow-1][xColumn-1]=='e') 
        return false;

    if (xRow-1>=0 && xRow-1<8 && xColumn+1>=0 && 
        xColumn+1<8 && board[xRow-1][xColumn+1]=='e') 
        return false;

    if (xRow+1>=0 && xRow+1<8 && xColumn-1>=0 && 
        xColumn-1<8 && board[xRow+1][xColumn-1]=='e') 
        return false;

    if (xRow+1>=0 && xRow+1<8 && xColumn+1>=0 && 
        xColumn+1<8 && board[xRow+1][xColumn+1]=='e') 
        return false;

    else
        return true;
}

