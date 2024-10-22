# Variables
CXX = g++
CXXFLAGS = -Wall -g

# Target executable name
TARGET = code

# Source file
SRCS = code.cpp

# Rule to build the target (default target)
all: $(TARGET)

# Rule to build the executable from the source
$(TARGET): $(SRCS)CXX = g++
CXXFLAGS = -Wall -g

TARGET = code
TEST_TARGET = code

SRCS = code.cpp
TEST_SRC = code.cpp

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

$(TEST_TARGET): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	rm -f $(TEST_TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean rule to remove compiled files
clean:
	rm -f $(TARGET)

# Optional rule for cleaning object files (if needed in future)
clean_all:
	rm -f $(TARGET) *.o
