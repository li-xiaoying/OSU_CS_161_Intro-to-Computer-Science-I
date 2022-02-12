#include <iostream>
#include <vector>
#include "Quadratic.hpp"

double meanValueFor(std::vector<Quadratic*>, double);

int main()
{
Quadratic q1;
Quadratic q2;
std::vector<Quadratic*> vec;
vec.push_back(&q1);
vec.push_back(&q2);
double result = meanValueFor(vec, 1.0);
return 0;
}
