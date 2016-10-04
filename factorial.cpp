#include<iostream>



long factorial(int a)
{

if (a>2)
{
a=a*factorial(a-1);
}



return a;
}

int main()
{

int a;
std::cout << "please enter an integer \n:";
std::cin >> a;

std::cout << factorial(a);

return 0;
}