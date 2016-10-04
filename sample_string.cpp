#include<iostream>
#include<string>

int main() 
{

std::string sample_string_identifier = "This is a sample \
string";

sample_string_identifier = sample_string_identifier + "another piece";

std::cout << sample_string_identifier;

return 0;

}