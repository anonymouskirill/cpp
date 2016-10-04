#include<iostream>

int main() 
{

//for (n=0, i=100; n!=i; n++, i--)
for (int n=0, i=100; n!=i; n++, i--)
{

if (n==30)
{
continue;
}

std::cout << n << "\n";

if (n==40)
{
std::cout << "\n we are at the " << n << "th iteration an we will stop here";
break;
}

}




return 0;
}