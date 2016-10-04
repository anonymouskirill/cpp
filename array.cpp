#include<iostream>

int factorial(int c)
{

if (c>2)
{
c=c*factorial(c-1);
}

return c;
}

int main()
{

int b;
std::cout << "Please enter an integer: \n";
std::cin >> b;
int a[b];

for (int n=0; n<=b-1; n++)
{
a[n]=factorial(n+1);
}

for (int n=0; n<=b-1; n++)
{
std::cout << a[n] << "\n";
}


return 0;
}