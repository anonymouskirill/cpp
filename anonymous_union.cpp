#include<iostream>

int main()
{

struct movies
{
int year;
char genre[3];
	union {
	int dollars;
	float yen;
	};
} mine;

mine.year=1975;

mine.dollars=4;


char genre[3];
std::cout << "Please enter a three letter abbreviation for the genre: \n";
std::cin >> genre;

for (int n=0; n<3; n++)
{
mine.genre[n]=genre[n];
std::cout << mine.genre[n];
}

return 0;
}