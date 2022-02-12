/****************************************************************************
** Author:      Xiaoying Li
** Date:        6/5/2019
** Description: 
****************************************************************************/


#include <iostream>
#include "FBoard.hpp"

FBoard::FBoard()
{
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++)
            board[i][j]='e';
    }
    board[7][0]='o';
    board[7][2]='o';
    board[7][4]='o';
    board[7][6]='o';
    board[0][3]='x';
    gameState=UNFINISHED;
    xRow=0;
    xColumn=3;
}

State FBoard::getGameState()
{
    return gameState;
}

bool FBoard::moveX(int xRowTo, int xColumnTo)
{
    if (gameState==X_WON || gameState==O_WON)
        return false;
    else if (xRowTo<0 || xRowTo>=8 || xColumnTo<0 || xColumnTo>=8)
        return false;
    else if (board[xRowTo][xColumnTo] != 'e')
	return false;
    else if ((xRowTo==xRow-1 || xRowTo==xRow+1) && 
             (xColumnTo==xColumn-1 || xColumnTo==xColumn+1)){
        board[xRow][xColumn]='e';
	board[xRowTo][xColumnTo]='x';
        xRow=xRowTo;
	xColumn=xColumnTo;
	if (xRow==7)
            gameState=X_WON;
	return true;
    }
    else
        return false;
}

bool FBoard::moveO(int oRow, int oColumn, int oRowTo, int oColumnTo)
{
    if (gameState==X_WON || gameState==O_WON)
        return false;
    else if (oRow<0 || oRow>=8 || oColumn<0 || oColumn>=8 ||
	     oRowTo<0 || oRowTo>=8 || oColumnTo<0 || oColumnTo>=8)
	return false;
    else if (board[oRow][oColumn] != 'o')
	return false;
    else if (board[oRowTo][oColumnTo] != 'e')
	return false;
    else if ((oRowTo==oRow-1) && (oColumnTo==oColumn-1 || oColumnTo==oColumn+1)){
        board[oRow][oColumn]='e';
	board[oRowTo][oColumnTo]='o';
        oRow=oRowTo;
	oColumn=oColumnTo;
	if (checkX())
            gameState=O_WON;
	return true;
    }
    else
        return false;
}

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

void FBoard::debug()
{
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++)
            std::cout << board[i][j] <<' ';
            std::cout << std::endl;
    }
}
