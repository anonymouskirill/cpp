#include<iostream>
#include<string>
#include<sstream>

int main() 
{

std::cout << "Please enter an integer: \n";

std::string string_identifier ;
getline(std::cin, string_identifier); 


int a;
std::stringstream(string_identifier) >> a;



std::cout << "the integer you entered is " << a; 

return 0;
}