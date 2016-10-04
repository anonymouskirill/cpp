#include<iostream>

int main()
{


int c;
std::cout << "Please enter an integer: \n" ;
std::cin >> c;

switch(c)
{

case 1:
	std::cout << "You have entered 1" ;
	break;
case 2:
	std::cout << "You have entered 2" ;
	break;
default:
	std::cout << "You have entered neither 1 nor 2" ;
	break;
}




return 0;
}