#ifndef __CPP_UNIT_TEST_HEADERS_H__
#define __CPP_UNIT_TEST_HEADERS_H__

#include <string>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <netinet/in.h>

#define TEST_CLASS(x) CPPUNIT_TEST_SUITE(x)
#define TEST(x) CPPUNIT_TEST(x)
#define END_TEST() CPPUNIT_TEST_SUITE_END()
#define REGISTER_TEST(x) CPPUNIT_TEST_SUITE_REGISTRATION(x)

using namespace CppUnit;
using namespace std;

template<class T1, class T2>
void getAssertion(T1 t1, T2 t2) {
	CPPUNIT_ASSERT(t1 == t2);
}

template<>
void getAssertion(string s1, string s2) {
	CPPUNIT_ASSERT(s1.compare(s2) == 0);
}

class CppTest : public TestFixture {};

#endif
