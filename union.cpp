#include<iostream>

union ints_and_chars
{ 
int integer_member[5];
char character_member[5];
} ;

int main()
{

ints_and_chars mix; 

//mix.integer_member[1]=4;
mix.character_member[3]='d';

char hello[5]="blah";

std::cout<<mix.character_member[3]<<"\n";

int a='d';
std::cout<<a;

return 0;
}