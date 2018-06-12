
CFLAGS =   



SRC_FILES := $(wildcard *.cpp)
#SRC_FILES := $(filter-out main.cpp, $(SRC_FILES))
OBJS := $(patsubst %.cpp,%.o, $(SRC_FILES))


libabc.a: $(OBJS)
	@ar rv $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


PHONY: clean
clean:
	rm $(OBJS)
	rm libabc.a
