/*********************************/
//使用C++ 11 bind function特性
//将模板用到 std::function 中，使std::function 支持模板。
/*********************************/


#include <functional>
#include <iostream>
using namespace std;

template<class T1, class T2 >
T1 func(T1 x, T2 y)
{
        return x+y;
}

template<class T1, class T2>
struct FunctionType
{
    typedef std::function<T1(T1, T2)> Type ;
} ;


template<class T1, class T2>
class Test
{
public:
    Test(){}
    ~Test(){}

    void create()
    {
        _temp_func = std::bind(&Test<T1, T2>::Show, this, placeholders::_1, placeholders::_2);
    }

    T1 Show(T1 x, T2 y)
    {
        std::cout<< x <<"\t"<< y <<std::endl;
        return x;
    }

    typename FunctionType<T1, T2>::Type _temp_func;
};

int main()
{
        Test<int, char> t ;
        t.create();
        t._temp_func(1, 'z');
        return 0;
            
        FunctionType<int, char>::Type Funcp = func<int, char> ;
        int k = Funcp(1, 'a');
        std::cout<<k<<"\t"<<char(k)<<std::endl;
        return 0;
}
