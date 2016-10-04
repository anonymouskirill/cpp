#include<iostream>

int main()
{

char a[]="Hello this is a sentence \n";

char * b=a;
char ** c = &b;

std::cout << (*a) << "\n";
std::cout << (*b) << "\n";
std::cout << *((*c)+6);




return 0;
}