#include<iostream>

int main()
{


char a[]={'h','e','l','l','o','\0'};
char * b;
b=a;

for (int n=0; n<5; n++)
{
std::cout << *(b+n);
}

return 0;
}