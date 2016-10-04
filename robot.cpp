#include<iostream>

int main()
{

char greeting[] = "Hello, what's your name friend? \n";
std::cout << greeting;

char friends_name[80];
std::cin >> friends_name;

std::cout << "Hello " << friends_name << "!";

return 0;
}