#include<iostream>

int first(int a, int b)
{
int r;
r=a+b;
return r;
}

inline int first(int a, int b, int c)
{
int r;
r=a+b+c;
return r;
}


int main()
{

int a=5, b=4, c=3;

std::cout << first(a,b);
std::cout << first(a,b,c);



return 0;
}