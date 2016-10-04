#include<iostream>

int addition(int x, int y)
{
int r;
r=x+y;
return r;
}

int operation(int x, int y,int (*some_function)(int, int) )
{
int r;
r=(*some_function)(x,y);
return r;
}

int main()
{

int (*minus)(int, int) = addition;

std::cout << operation(4,5,minus);


return 0;
}