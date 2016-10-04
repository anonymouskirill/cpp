#include<iostream>

int factorial(int n)
{
int r;
if (n>1)
{r=n*factorial(n-1);}
else
{r=1;}
return r;
}

int main()
{ 

std::cout<<factorial(3);


return 0;
}