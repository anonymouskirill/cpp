#include<iostream>

class triangle{
int x, y;
	public:
void set(int a, int b)
{x=a;y=b;}
int area(void)
{int r=x*y/2;
return r;}
};


int main()
{

triangle isosceles, equilateral;
isosceles.set(3,4);
std::cout<<isosceles.area();

equilateral.set(4,4);
std::cout<<equilateral.area();
return 0;
}