#include<iostream>

class polygon{
protected:
int width, height;
public:
polygon(int a, int b)
{width=a; height=b;}
polygon()
{width=0; height=0;}
void set_values(int a, int b)
{width=a; height=b;}
};

class rectangle:public polygon{
public:

rectangle () : polygon ()
{};

void get_area()
{int r; r=width*height; std::cout<<r;}
};

int main()
{

rectangle a;
a.get_area();

return 0;
}