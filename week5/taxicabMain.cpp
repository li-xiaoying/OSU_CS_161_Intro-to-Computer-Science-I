#include <iostream>
#include "Taxicab.hpp"
using namespace std;

int main()
{
    int xCoord;
    int yCoord;
    int distanceTraveled;
    int x;
    int y;
    cout << "Enter the x and y." << endl;
    cin >> xCoord;
    cin >> yCoord;
    cout << "Enter moveX and moveY." <<endl;
    cin >> x;
    cin >> y;
    Taxicab cab(xCoord, yCoord);
    cab.moveX(x);
    cab.moveY(y);
    cout << cab.getDistanceTraveled() << endl;
    return 0;
}
