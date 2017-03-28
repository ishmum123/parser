all: main.cpp
	g++ -std=c++11 main.cpp -o RunFile

clean:
	rm RunFile

test: tests/TestRunner.cpp
	g++ -std=c++11 tests/TestRunner.cpp -l cppunit -o RunTests

cleantest:
	rm RunTests
