#include <iostream>
#include <functional>
using namespace std;

typedef std::function<void(int)> FT;

void incre(int& a)
{
    a = a+100;
}

class Test
{
    public:
        Test(){}
        ~Test(){}

        void show(int k)
        {
            std::cout<<"Test::show"<<k<<std::endl;
        }
};



int main()
{
    int a = 1;
    auto ft = std::bind(&incre, placeholders::_1);
    ft(a);
    std::cout<<a<<std::endl;

    Test a2;
    FT ft2 = std::bind(&Test::show, &a2, placeholders::_1);
    ft2(232343);
	return 0;
}
