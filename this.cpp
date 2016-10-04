#include<iostream>

class boolean{
public:
bool isitme(boolean& c)
{
if ((&c)==this)
	return true;
else
	return false;
}

};

int main()
{
boolean a, b;

if (a.isitme(b))
	std::cout<<"yes the address of a is a";
else 
	std::cout<<"nah";

return 0;
}