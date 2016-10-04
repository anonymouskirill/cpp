#include<iostream>

class polygon{
protected: 
int width, height;
public: 
polygon()
{width=0; height=0;}
polygon(int a, int b)
{width=a; height=b;}
};

class word{
public:
word()
{std::cout<<"hello I am word!\n";}
};

class rectangle:public polygon, public word{
public:
rectangle():polygon()
{}
rectangle(int a, int b):polygon(a,b)
{}
void get_area()
{int r; r=width*height; std::cout << r;}
};

int main()
{

rectangle a;
a.get_area();


return 0;
}