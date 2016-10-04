#include<iostream>

int main()
{

bool a=true;
bool b=false;

bool c=a||b; 


std::cout << std::boolalpha << c;

std::cout << "\n";

std::cout << (!c);

return 0;
}