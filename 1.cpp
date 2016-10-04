#include<iostream>
#include<cmath>

double integrate(double a, double b, double partition_length)
{
double r=0;
double unit=(b-a)/partition_length;

for (double n=1; n<=partition_length; n++)
{
r=r+sin(a+unit*n);
}
r=r*unit;

return r;
}

int main()
{

std::cout<<integrate(0,M_PI/2,1000);

return 0;
}