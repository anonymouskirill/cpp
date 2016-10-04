#include<iostream>

class square;

class rectangle{
int x,y;
public:
rectangle(int a, int b)
{x=a; y=b;}
int area()
{return x*y;}
void convert(square);
};

class square{
int x;
public:
square(int a)
{x=a;}
friend class rectangle;
};

void rectangle::convert(square parameter)
{x=parameter.x; y=parameter.x;}

int main()
{

square c(5);
rectangle a(3,3);
a.convert(c);

std::cout << a.area();

return 0;
}