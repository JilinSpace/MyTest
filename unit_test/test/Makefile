CC=g++

TEST_SRC =/home/ljl/gitspace/MyTest/unit_test/src
GTEST = /home/ljl/gitspace/MyTest/googletest
INC = $(GTEST)/include 
LIBPATH = $(GTEST)/lib



LIBS	+= -L$(LIBPATH) -lgtest -L$(TEST_SRC) -labc

CFLAGS += -I$(INC) -I$(TEST_SRC) -I./ 

##OBJS := $(patsubst %.cpp, %.o, $(wildcard, *.cpp))
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp)) 
TEST_O := #$(wildcard $(TEST_SRC)/*.a) 

#Compile
TARGET = unit_test
$(TARGET): $(OBJS) $(TEST_O) 
	$(CC) -o $@  $(CFLAGS)  $^  $(LIBS) -lpthread
		
%.o : %.cpp
	$(CC)  $(CFLAGS) -c $< -o $@


.PHONY : clean
clean:
	rm -f *.o *.a
	rm $(TARGET)

