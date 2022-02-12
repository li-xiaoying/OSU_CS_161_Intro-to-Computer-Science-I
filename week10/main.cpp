#include <iostream>
#include "FBoard.hpp"

int main()
{
FBoard fb;
fb.debug();
fb.moveX(1,4);
fb.moveX(2,5);
fb.moveO(7,0,6,1);
fb.getGameState();
State st = fb.getGameState();
if(st==O_WON) 
    std::cout<<"O_WON"<<std::endl;
if(st==X_WON) 
    std::cout<<"X_WON"<<std::endl;
if(st==UNFINISHED) 
    std::cout<<"UNFINISHED"<<std::endl;
fb.debug();
return 0;
}
