#include <iostream>
#include <functional>
using namespace std;

typedef std::function<void(int)> FT;

void incre(int& a)
{
    a = a+100;
}

int main()
{
    int a = 1;
    auto ft = std::bind(&incre, placeholders::_1);
    ft(a);
    std::cout<<a<<std::endl;
	return 0;
}
