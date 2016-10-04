#include<iostream>

int main()
{

int b[4]={1, 2, 3, 4};
int * a[4];

for (int n=0; n<4; n++)
{
a[n]=b;
}

std::cout << *(a[3]+3);

return 0;
}