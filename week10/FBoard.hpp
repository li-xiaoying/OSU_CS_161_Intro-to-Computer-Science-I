/****************************************************************************
** Author:      Xiaoying Li
** Date:        6/5/2019
** Description: 
****************************************************************************/


#ifndef FBOARD_HPP
#define FBOARD_HPP

enum State {X_WON, O_WON, UNFINISHED};

class FBoard
{
private:
    char board[8][8];
    State gameState;
    int xRow;
    int xColumn;
    bool checkX();

public:
    FBoard();
    State getGameState();
    bool moveX(int, int);
    bool moveO(int, int, int, int);
    void debug();
};

#endif


