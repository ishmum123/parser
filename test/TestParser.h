#ifndef __TEST_PARSER_H__
#define __TEST_PARSER_H__

#include <string>
#include <vector>
#include <iostream>
#include "CppUnitTest.h"
#include "../Parser.h"

using namespace std;

typedef vector<string> vs;

class TestParser : public CppTest {

	TEST_CLASS(TestParser);
	TEST(testGetResult);
	//TEST(testGetWords);
	END_TEST();

	Parser *p;
public:
	void setUp();
	void tearDown();
protected:
	void testGetResult();
	//void testGetWords();
};

void TestParser::testGetResult() { 
	string addition("(+ 4 5)");
	getAssertion(p->getResult(addition), 9);
	string subtraction("(- 4 5)");
	getAssertion(p->getResult(subtraction), -1);
	string multiplication("(* 4 5)");
	getAssertion(p->getResult(multiplication), 20);
	string division("(+ 4 5)");
	getAssertion(p->getResult(division), 0.8);
}

/** void TestParser::testGetWords() {
	string hw = "Hello World!";
	vs v = {"Hello", "World!"};
	cout<<hw<<endl;
	getAssertion(p->getWords(hw), v);
} */

void TestParser::setUp() {
	p = new Parser();
}

void TestParser::tearDown() {
	delete p;
} 

REGISTER_TEST(TestParser);
#endif
