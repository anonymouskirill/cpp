#include<iostream>

int main() 
{

std::cout << "This loop will stop once the user enters the value 0 \n";
int c;

do
{
std::cout << "Please enter a positive integer: \n";
std::cin >> c;
std::cout << "You have entered " << c << ".\n";
}
while (c>0);




return 0;
}