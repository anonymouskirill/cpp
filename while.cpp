#include<iostream>

int main() 
{

int c;

std::cout << "Please enter a positive integer \n";
std::cin >> c;

if (c<=0)
{
std::cout << "that's not positive!";
return 0;
}

std::cout << "Here is a list of positive integers less than " << c << ":\n";

while (c>1)
{
--c;
std::cout << c << "\n";
}




return 0;
}