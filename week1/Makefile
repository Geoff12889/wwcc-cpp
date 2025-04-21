# Requirements:
#
#    1. Create a C++ program that prints "This program was compiled using a Makefile"
#    2. Create a Makefile that:
#        a. Compiles the program with g++
#        b. Uses the -Wall and -std=c++17 flags
#        c. Includes a 'clean' target to remove the executable
#    3. Compile the program using the Makefile
#    4. Run the program to verify it works


# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Target executable
TARGET = assignment4-makeFile

# Source files
SRCS = assignment4-makeFile.cpp

# Build rule
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean rule to remove compiled files
clean:
		rm -f $(TARGET)
