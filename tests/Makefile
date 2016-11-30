all: test

test: isaac64_test isaac32_test
	./isaac64_test > result64.txt && cmp expected64.txt result64.txt
	./isaac32_test > result32.txt && cmp expected32.txt result32.txt

CXXFLAGS += -std=c++0x

isaac64_test: isaac64_test.o
	$(CXX) $^ $(LDFLAGS) -o $@

isaac32_test: isaac32_test.o
	$(CXX) $^ $(LDFLAGS) -o $@

%.o: %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -std=c++11 -c "$<" -o "$@"

isaac64_test.o: isaac64_test.cpp
isaac32_test.o: isaac32_test.cpp

clean:
	-rm -f isaac64_test.o isaac64_test result64.txt isaac32_test.o isaac32_test result32.txt

.PHONY: clean
