#include<iostream> 

void print_out() 
{
std::cout << "hello \n";
}

void previous_and_next(int &prev, int &next)
{
prev-=1;
next+=1;
}

int main()
{
print_out();

int a,b;

std::cout << "Please enter an integer: \n";
std::cin >> a;
b=a;

previous_and_next(a,b);

std::cout << a << " " << b;

return 0;
}