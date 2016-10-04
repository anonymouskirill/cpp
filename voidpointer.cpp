#include<iostream>

void print_out_next(void* type, int n)
{

if (n==sizeof(char))
{
char* a;
a=static_cast<char*>(type);
(*a)=(*a)+4;
std::cout << (*a);
}
else if (n==sizeof(int))
{
int* a;
a=static_cast<int*>(type);
*a=10;
std::cout << (*a);
}

}

int main()
{
int c=3;
char b='h';
print_out_next(&b, sizeof(b)); 
//print_out_next(&c, sizeof(c)); 


return 0;
}