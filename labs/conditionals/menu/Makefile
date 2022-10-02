
COMPILER = g++ 

COMPILER_FLAGS = -c -g -Wall -std=c++17

PROGRAM_NAME = menu.exe

CPP_FILES = main.cpp

build:
	@$(COMPILER) $(COMPILER_FLAGS) $(CPP_FILES)
	@$(COMPILER) -o $(PROGRAM_NAME) *.o
	@echo "successfully compiled!"

run:
	@./$(PROGRAM_NAME)


clean:
	rm -f $(PROGRAM_NAME) *.o

unittest:
	@./$(PROGRAM_NAME) test


	

