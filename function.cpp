#include<iostream>

float division(float a, float b)
{
float r;
r=a/b;
return r;
}

void print_message()
{
std::cout << "This is a message";
}

int main()
{

float a, b; 

std::cout << "Please enter a number: \n";
std::cin >> a; 
std::cout << "Please enter another number: \n";
std::cin >> b; 

std::cout << "The result of dividing the first number by the second is" << division(a,b);

print_message();

return 0;
}