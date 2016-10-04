#include<iostream>

class vector{
public:
	int x,y,z;

	vector(int a, int b, int c)
	{x=a;y=b;z=c;}	
	vector()
	{x=0;y=0;z=0;}

	vector operator - (vector parameter)
	{vector temp;
	temp.x=x-parameter.x;
	temp.y=y-parameter.y;
	temp.z=z-parameter.z;
	return temp;
	}

	void operator = (const vector& parameter)
	{
	x=parameter.x;
	y=parameter.y;
	z=parameter.z;
	}

};

int main()
{

vector a(1,2,3);
vector b(1,1,1);
vector c;

c=b;

std::cout << c.x << c.y << c.z;

return 0;
}