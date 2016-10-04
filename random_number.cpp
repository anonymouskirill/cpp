#include<iostream>
#include <stdlib.h>
#include<new>

int main()
{

srand (time(NULL));

int a;
a=(rand() % 1000);

int* p; 
p=new(std::nothrow)int[a];
	if (p==0)
	{std::cout<<"here is an error message";}

for (int n=0; n<a; n++)
	{
	*(p+n)=n+1;
	}

for (int n=0; n<a; n++)
	{
	std::cout << (*(p+n)) << std::endl;
	}

delete[] p;

return 0;
}