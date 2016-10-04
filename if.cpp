#include<iostream>

int main() {

int x; 
std::cout << "Please enter an integer \n";

std::cin >> x;

if (x<0)
{
std::cout << "The integer you entered is negative";
}
else if (x>0) 
{
std::cout << "The integer you entered is positive";
}
else
{
std::cout << "The integer you entered is zero";
}

return 0;
}