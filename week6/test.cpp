#include <iostream>
#include <iomanip>
#include "Vase.hpp"
#include "HalfOpenCylinder.hpp"

using namespace std;

int main()
{
HalfOpenCylinder hoc1;
Vase vase1(hoc1, 0.12);
cout << vase1.totalCost() << endl;
HalfOpenCylinder hoc2(80.4, 13);
Vase vase2(hoc2, 0.2);
// std::boolalpha prints Boolean values as "true" or "false" instead of an integer value
cout << std::boolalpha << vase1.costsMoreThan(vase2) << endl;
return 0;
}
