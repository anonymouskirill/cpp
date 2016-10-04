#include<iostream>

class polygon{
protected:
int x, y;
public:
polygon(int a, int b)
{x=a; y=b;}
polygon()
{x=0; y=0;}

virtual void print_area()
{std::cout<<"Hello";}

};

class rectangle: public polygon{
public:
rectangle(int a, int b)
{x=a; y=b;}
void print_area()
{int r; r=x*y; std::cout<<r;}
};

int main()
{

polygon* p;
rectangle a(2,3);
p=&a;
(*p).print_area();

polygon pee;
pee.print_area();

return 0;
}