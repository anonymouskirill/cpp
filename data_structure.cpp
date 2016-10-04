#include<iostream>
#include<new>

int main()
{

struct favorite{
int number;
int word[5];
};

favorite users;



std::cout << "what is your favorite 4 letter word? \n";
std::cin >> users.word[1];

std::cout << "what is your favorite number? \n";
std::cin >> users.number;

std::cout << "your favorite 4 letter word is " << users.word[2] << "\n";





return 0;
}