/********************************************************************
** Author:      Xiaoying Li
** Date:        6/5/2019
** Description: The header file for class named FBoard for playing a
                game, where player x is trying to get her piece to 
                row 7 and player o is trying to make it so player x 
                doesn't have any legal moves. 
********************************************************************/


#ifndef FBOARD_HPP
#define FBOARD_HPP


//Enum definition
enum State {X_WON, O_WON, UNFINISHED};

//FBoard class declaration
class FBoard
{
//Private data members
private:
    //An 8x8 array of char for tracking the positions of the pieces
    char board[8][8];
    State gameState;
    //Data members to keep track of where the x piece is
    int xRow;
    int xColumn;
    //Private helper function
    bool checkX();

//Public function declaration
public:
    FBoard();
    State getGameState();
    bool moveX(int, int);
    bool moveO(int, int, int, int);
};

#endif


