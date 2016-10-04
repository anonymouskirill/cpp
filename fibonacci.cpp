#include<iostream>

int fibonacci(int a, int b)
{
int r;
r=a+b;
return r;
}

int main()
{

int c;
std::cout << "How many terms of the fibonacci sequence would you like to see? \n";
std::cin >> c; 

int sequence[c];
sequence[0]=1;
sequence[1]=1; 

for (int n=2;n<c;n++)
{
sequence[n]=fibonacci(sequence[n-1],sequence[n-2]);
}

for (int n=0;n<c;n++)
{
std::cout << sequence[n] << std::endl;
}

return 0;
}
