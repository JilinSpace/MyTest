  #include <sys/time.h>
#include <iostream>

  int main()
  {
      timeval starttime,endtime;
      gettimeofday(&starttime,0);
 
      //do some process here
      std::cout<<starttime.tv_usec<<starttime.tv_sec<<"do something"<<std::endl;
 
      gettimeofday(&endtime,0);
      double timeuse = 1000000*(endtime.tv_sec - starttime.tv_sec) + endtime.tv_usec - starttime.tv_usec;
//      timeuse /=1000;//除以1000则进行毫秒计时，如果除以1000000则进行秒级别计时，如果除以1则进行微妙级别计时

	std::cout<<timeuse<<std::endl;
	
  }
