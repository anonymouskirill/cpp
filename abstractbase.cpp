#include<iostream>

class polygon{
protected:
int x, y;
public:
polygon(int a, int b)
{x=a; y=b;}
polygon()
{x=0; y=0;}
virtual void print_area() =0;
void set_values(int a, int b)
{x=a; y=b;}
};

class rectangle:public polygon{
public:
rectangle(int a, int b)
{x=a; y=b;}
rectangle()
{x=0; y=0;}
void print_area()
{int r; r=x*y; std::cout<<r;}
};

int main()
{

polygon* p=new(std::nothrow)rectangle[3];
(*(p+1)).set_values(3,4);
(*(p+1)).print_area();


return 0;
}