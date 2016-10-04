#include<iostream>

class rectangle{
int x, y;
public:
rectangle() {x=0;y=0;}
rectangle(int a, int b) {x=a;y=b;}
friend rectangle addition(rectangle parameter1, rectangle parameter2)
{
rectangle a;
a.x=parameter1.x + parameter2.x;
a.y=parameter1.y + parameter2.y;
return a;
}
void get_x_coordinate()
{
std::cout << x;
}
};

int main()
{
rectangle a(4,5);
rectangle b(2,2); 
rectangle c; 
c=addition(a,b);

c.get_x_coordinate();

return 0;
}