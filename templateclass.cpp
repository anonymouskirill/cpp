#include<iostream>

template <class T>
class storage{
T x[2];
public:
storage(T a, T b)
{x[0]=a; x[1]=b;}
T getmaximum()
{
T result;
result=(x[0]>x[1])?x[0]:x[1];
return result;
}
};

int main()
{

storage<int> name_of_object(4,17);
std::cout<<(name_of_object.getmaximum());


return 0;
}