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
//    int i=0;
 //   while(i<1000)
  //  {
  //      ++i;
  //  }
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
        //std::cout<< x <<"\t"<< y <<std::endl;
        return 0;
    }

    typename FunctionType<T1, T2>::Type _temp_func;
};

int test1(int a, int b)
{
    return a+b;
}

inline int test2(int a, int b)
{
    return a+b;
}

  #include <sys/time.h>
int gettime()
{
      timeval starttime;
      gettimeofday(&starttime,0);
 
      double timeuse = 1000000*(starttime.tv_sec%100) + starttime.tv_usec;
      return (int)timeuse;// /=1000;//除以1000则进行毫秒计时，如果除以1000000则进行秒级别计时，如果除以1则进行微妙级别计时
}

int main()
{
    Test<int, int> t ;
    t.create();
       
    int t1 = gettime();
    for(int i=0; i<1000000; i++)
    {
        t._temp_func(1, 2);
       // Funcp(1, 'a');
	}
    int t2 = gettime();
    for(int i=0; i<1000000; i++)
    {
       // t._temp_func(1, 'z');
        func<int, int>(1, 2);
    }
    int t3 = gettime();
    for(int i=0; i<1000000; i++)
    {
       // t._temp_func(1, 'z');
        test1(1, 2);
    }
    int t4 = gettime();
    for(int i=0; i<1000000; i++)
    {
       // t._temp_func(1, 'z');
        test2(1, 2);
    }
    int t5 = gettime();
    FunctionType<int, char>::Type Funcp = func<int, char> ;
    for(int i=0; i<1000000; i++)
    {
       Funcp(1, 'a');
	}
    int t6 = gettime();
    std::cout<<t1<<"\t"<<t2<<"\t"<<t3<<std::endl;
    std::cout<<t2-t1<<"\t"<<t3-t2<<"\t"<<t4-t3<<"\t"<<t5-t4<<"\t"<<t6-t5<<std::endl;
    return 0;
}
