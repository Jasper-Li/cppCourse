CXX = clang++
CPPFLAGS = -Wall 
CPPFLAGS += -std=c++17
LDLIBS = -lstdc++ -lm

CPPFILES = $(wildcard *.cpp)
OBJFILES = $(CPPFILES:.cpp=.o)
OUT      = main.exe

$(OUT): $(OBJFILES)
	$(CC) $(LDFLAGS) -o $@ $^ $(LDLIBS)
	./$(OUT)

.PHONY: clean
clean:
	rm -f $(OBJFILES) $(OUT) 
