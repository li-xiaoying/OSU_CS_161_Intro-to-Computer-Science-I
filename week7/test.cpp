#include "Person.hpp"
#include <cmath>
#include <iostream>
const double EPS = 0.00001;
double stdDev(Person array[], int size);
int main()
{
Person a("alice", 92);
Person b("bernice", 77);
Person array[] = {a,b};
double result = stdDev(array, 2);
std::cout << result << std::endl;
return 0;
}

