#include<iostream>


int main()
{

char a[] = {'a', 'b', '\0'};

for (int n=0; n<2; n++)
{
std::cout << a[n] << '\n';
}

return 0;
}