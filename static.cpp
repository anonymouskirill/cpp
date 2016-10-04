#include<iostream>
#include<new>

class why{
	int x;
public:
	static int n;
	why() {x=0; n++;}
	why(int a) {x=a; n++;}
	~why() {n--;}
};

int why::n=17;

int main()
{

why a;
why b[5];
why* c=new(std::nothrow)why;
delete c;
std::cout << a.n;

return 0;
}