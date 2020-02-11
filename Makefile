CXX= g++
CXXFLAGS=
LDFLAGS =
all: two_array_sum array_sum

array_sum: array_sum.cpp
	$(CXX) $(CXXFLAGS) -o array_sum  array_sum.cpp $(LDFLAGS)

two_array_sum: two_array_sum.cpp
	$(CXX) $(CXXFLAGS) -o two_array_sum two_array_sum.cpp $(LDFLAGS)

clean:
	rm -f array_sum *.o
	rm -f two_array_sum *.o
