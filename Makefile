test: test/TestRunner.cpp
	g++ -std=c++11 test/TestRunner.cpp -l cppunit -o RunTests

clean:
	rm RunTests
