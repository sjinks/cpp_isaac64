all: test

test: isaac64_test
	./isaac64_test > result.txt && cmp expected.txt result.txt

CXXFLAGS += -std=c++0x

isaac64_test: isaac64_test.o
	$(CXX) $^ $(LDFLAGS) -o $@

.$o: %c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c "$<" -o "$@"

isaac64_test.o: isaac64_test.cpp

clean:
	-rm -f isaac64_test.o isaac64_test result.txt

.PHONY: clean
