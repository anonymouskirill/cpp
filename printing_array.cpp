#include<iostream>

int main()
{

int a[2][2] = { {1,1}, {1,1} };

for (int m=0; m<2; m++)
{
for (int n=0; n<2; n++)
{
a[n][m]=n*m;
std::cout << a[n][m];
}
}

return 0;
}