#include<iostream>
#include<new>

int main()
{

int a, b;
int* p; 

std::cout << "Please enter an integer: \n";
std::cin >> a; 

p=new(std::nothrow)int[a];
	if (p==0)
	{std::cout<<"this is an error message";}

for (int n=0; n<a; n++)
	{
	*(p+n)=n+1;
	}

for (int n=0; n<a; n++)
	{
	std::cout << (*(p+n));
	}

delete[] p;

return 0;
}