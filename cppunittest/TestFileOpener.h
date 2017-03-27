#ifndef __TEST_FILE_OPENER_H__
#define __TEST_FILE_OPENER_H__

#include "CppUnitTest.h"
#include "FileOpener.h"

using namespace std;

class TestFileOpener : public CppTest {

	TEST_CLASS(TestFileOpener);
	TEST(testGetOpen);
	END_TEST();

	FileOpener *fo;
public:
	void setUp();
	void tearDown();
protected:
	void testGetOpen();
};

void TestFileOpener::testGetOpen() { 
	getAssertion(fo->getOpen(), 1);
}

void TestFileOpener::setUp() {
	fo = new FileOpener("iris.data");
}

void TestFileOpener::tearDown() {
	delete fo;
} 

REGISTER_TEST(TestFileOpener);
#endif
