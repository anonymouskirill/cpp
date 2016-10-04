#include<iostream>

int main()
{

int a, b;
int *p=&a,*q=&b; 

*p=10;
*q=20;

std::cout<<a<<b<<std::endl;

char alice[] = {'a','b','\0'};
char *r;
r=alice;

std::cout << r;


return 0;
}