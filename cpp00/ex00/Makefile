
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = megaphone                       
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)                        

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

fclean: clean
	rm -f *~ *.tmp

re: fclean all
