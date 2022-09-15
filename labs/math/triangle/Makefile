
COMPILER = g++

COMPILER_FLAGS = -c -g -Wall -std=c++17

PROGRAM_NAME = triangle.exe

CPP_FILES = main.cpp

build:
	@$(COMPILER) $(COMPILER_FLAGS) $(CPP_FILES)
	@$(COMPILER) -o $(PROGRAM_NAME) *.o
	@echo "successfully compiled!"

run:
	@./$(PROGRAM_NAME)

clean:
	rm -f $(PROGRAM_NAME) *.o

test:
	cat input/1.in | ./$(PROGRAM_NAME) | diff - output/1.ans

	
	@echo "All test cases passed!"

	//@ makes it so that it doesn't print the name
