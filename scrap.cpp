#include<iostream>

class rectangle{
int x, y;
public:
rectangle (int a, int b)
	{x=a;y=b;}
rectangle ()
	{x=0;y=0;}
void set_values(int a, int b)
	{x=a; y=b;}
void return_area()
	{int r; r=x*y; std::cout<<r;}
};

int main()
{

/*int* p[4];

(*(p[0]))=4;

std::cout << (*p);*/

rectangle* a[5];

a[0]=new(std::nothrow)rectangle;


(*(a[0])).return_area(); 

return 0;
}