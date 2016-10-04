#include<iostream>

class rectangle{
private: 
	int x, y;
public:
	void set_values(int a, int b)
	{
	x=a;
	y=b;
	}
	int get_area()
	{
	int c;
	c=x*y;
	return c;
	}
};

int main()
{
rectangle rect1, *p1, *p2, *p3;
p1=&rect1;
p2=new(std::nothrow)rectangle;
p3=new(std::nothrow)rectangle[2];

rect1.set_values(3,4);
(*p1).set_values(4,5);

(*(p3+1)).set_values(5,6);
std::cout<<(p3[1]).get_area();


return 0;
}