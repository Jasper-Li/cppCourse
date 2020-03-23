CXX = clang++
CPPFLAGS = -Wall 
CPPFLAGS += -std=c++17
LDLIBS = -lstdc++ -lm -lstdc++fs

CPPHEADERS = $(wildcard *.h)
CPPFILES = $(wildcard *.cpp)
OBJFILES = $(CPPFILES:.cpp=.o)
OUT      = main.exe


$(OUT): $(CPPFILES) 
	$(CXX) $(LDFLAGS) -o $@ $^ $(LDLIBS)

$(OBJFILES): $(CPPHEADERS)


.PHONY: test 
test: $(OUT)
	./$(OUT)
.PHONY: clean
clean:
	rm -f $(OBJFILES) $(OUT) 
