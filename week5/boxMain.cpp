#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
    double volume;
    double area;
    double boxHeight, boxWidth, boxLength;
    cout << "Enter the length, width and length." << endl;
    cin >> boxHeight;
    cin >> boxWidth;
    cin >> boxLength;
    Box box(boxHeight, boxWidth, boxLength);
    volume = box.calcVolume();
    area = box.calcSurfaceArea();
    cout << "volume: " << volume << endl;
    cout << "surface area: " << area << endl;
    return 0;
}
