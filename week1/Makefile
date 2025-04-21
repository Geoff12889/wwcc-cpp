# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Target executable
TARGET = assignment1-helloGit

# Source files
SRCS = assignment1-helloGit.cpp

# Build rule
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean rule to remove compiled files
clean:
		rm -f $(TARGET)
