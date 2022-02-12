#include <iostream>
#include "FBoard.hpp"

int main()
{
FBoard fb;
fb.debug();
fb.getGameState();
State st=fb.getGameState();
int x1, x2, o1, o2, o3, o4;
while (st==UNFINISHED)
{
    std::cout << "Enter 2 x's move." << std::endl;
    std::cin >> x1;
    std::cin >> x2;
    std::cout << "Enter 4 o's move." << std::endl;
    std::cin >> o1;
    std::cin >> o2;
    std::cin >> o3;
    std::cin >> o4;
    fb.moveX(x1, x2);
    fb.moveO(o1, o2, o3, o4);
    st=fb.getGameState();
    fb.debug();
}
if(st==O_WON) 
    std::cout<<"O_WON"<<std::endl;
if(st==X_WON) 
    std::cout<<"X_WON"<<std::endl;
if(st==UNFINISHED) 
    std::cout<<"UNFINISHED"<<std::endl;
return 0;
}
