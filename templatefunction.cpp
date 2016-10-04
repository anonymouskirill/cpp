#include<iostream>

template <class T, class U>
U getmax(T a, U b)
{
U result;
result=(a>b)?a:b;
return result;
}

int main()
{

std::cout<<(getmax<float,int>(6.4345,5));


return 0;
}