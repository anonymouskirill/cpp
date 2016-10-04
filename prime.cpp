#include<iostream>

int main()
{

//First I get a bunch of prime numbers, say 100
int c=3, prime_numbers[100];
prime_numbers[0]=2;
int counter=1;

while (prime_numbers[99]==0) 
{

bool is_c_prime = true;

for (int n=2;n<c;n++)
{
is_c_prime=(is_c_prime&&(0!=(c%n)));
}

if (is_c_prime==1)
{
prime_numbers[counter]=c;
counter++;
}

c++;
}


/*for (int n=0;n<99;n++)
{
std::cout << prime_numbers[n] << std::endl;
}*/


int a;
std::cout<<"Please enter a positive integer";
std::cin>>a;

int n=0;
int prime_factors_of_a[20];
counter=0;
while (a!=1)
{


if ((a%prime_numbers[n])==0)
{
a=a/(prime_numbers[n]);
prime_factors_of_a[counter]=prime_numbers[n];
counter++;
}
else
{
n++;
}

}

n=0;
while ((prime_factors_of_a[n])!=0)
{
std::cout << prime_factors_of_a[n] << std::endl;
n++;
}










return 0;
}