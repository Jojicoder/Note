CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

# 使い方 (各Dayフォルダの中で):
#   make -f ../../Makefile run FILE=Day8_6_2026_2
SOURCES = $(wildcard *.cpp)
BINARIES = $(SOURCES:.cpp=)

run: $(FILE)
	./$(FILE)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(BINARIES)
