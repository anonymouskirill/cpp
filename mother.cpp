#include<iostream>

class mother{
public:
	mother()
	{std::cout<<"default constructor \n";}
	mother(int a)
	{std::cout<<"not default constructor \n";}
};

class daughter:public mother{
public:
	daughter()
	{std::cout<<"daughter default constructor \n";} 
	daughter(int a)
	{std::cout<<"daughter not default constructor \n";}
};

class son:public mother{
public:
	son()
	{std::cout<<"daughter default constructor \n";}
	son(int a):mother(a)
	{}	
};

int main() 
{

son jack(4);

son paul;

return 0;
}