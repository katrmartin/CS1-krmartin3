# compiler name
CXX = g++
# g++ compiler flags
# -g: adds debugging information to the executable file
# -Wall: turns on most, but not  all, compiler warnings
# -std=c++17: uses c++17 standard
# put all the required flags separated by space
CXXFLAGS = -c -g -Wall -std=c++17

# the build target executable file; .exe is not required
PROGRAM = addtwonumbers.exe

# list .cpp files separated by space
CPPFILES = main.cpp

# make all rule/default rule that'll be run when we run "make"
# first compile each file to object file
# then make a single binary/executable program
all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

# make clean rule
# delete object and binary files
clean:
	rm -f $(PROGRAM) *.o

# FIXME #FIXED
# add a rule to run the program

run:
	./$(PROGRAM)

test:
	cat input/1.in | ./$(PROGRAM) | diff - output/1.ans
	cat input/2.in | ./$(PROGRAM) | diff - output/2.ans

#FIX inputs #FIXED

	cat input/3.in | ./$(PROGRAM) | diff - output/3.ans
	cat input/4.in | ./$(PROGRAM) | diff - output/4.ans
	cat input/5.in | ./$(PROGRAM) | diff - output/5.ans
	cat input/6.in | ./$(PROGRAM) | diff - output/6.ans
	@echo "All test cases passed!"



















	