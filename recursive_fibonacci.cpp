#include<iostream>


int fibonacci(int n)
{
int r;

if (n>2)
{
r=fibonacci(n-1)+fibonacci(n-2);
}
else if (n>0)
{
r=1;
}

return r;
}


int main()
{

for (int n=1; n<15; n++)
{
std::cout << fibonacci(n) << std::endl;
}

return 0;
}