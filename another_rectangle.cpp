#include<iostream>
#include<new>

class rectangle{
int *width, *height;
	public:
rectangle(int a, int b)
{
width=new(std::nothrow)int;
height=new(std::nothrow)int;
(*width)=a;
(*height)=b;
}
~rectangle()
{
delete width;
delete height;
}
int get_area()
{
int x;
x=(*width)*(*height);
return x;
}
};

int main()
{

rectangle a(3,4);
std::cout << a.get_area();

return 0;
}