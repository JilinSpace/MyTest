#include <iostream>

class AA
{
        public :
                AA(){}
                void output(){std::cout<<"feffff"<<std::endl;}
};


int main()
{
        AA a;
        a.output();
        a.output();
	a.output();
	for(int i=0; i<10; i++)
	{
        std::cout<<i+2<<std::endl;
		std::cout<<i<<std::endl;
	}
	return 0;
}
