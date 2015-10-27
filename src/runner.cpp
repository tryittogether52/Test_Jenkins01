/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-MY_TEST.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "MY_TEST";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite2_init = false;
#include "/home/thanhvv/workspace/00_00_test/src/MyTestSuite2.h"

static MyTestSuite2 suite_MyTestSuite2;

static CxxTest::List Tests_MyTestSuite2 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite2( "MyTestSuite2.h", 4, "MyTestSuite2", suite_MyTestSuite2, Tests_MyTestSuite2 );

static class TestDescription_suite_MyTestSuite2_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite2_testAddition() : CxxTest::RealTestDescription( Tests_MyTestSuite2, suiteDescription_MyTestSuite2, 7, "testAddition" ) {}
 void runTest() { suite_MyTestSuite2.testAddition(); }
} testDescription_suite_MyTestSuite2_testAddition;

static class TestDescription_suite_MyTestSuite2_testMultiplication : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite2_testMultiplication() : CxxTest::RealTestDescription( Tests_MyTestSuite2, suiteDescription_MyTestSuite2, 13, "testMultiplication" ) {}
 void runTest() { suite_MyTestSuite2.testMultiplication(); }
} testDescription_suite_MyTestSuite2_testMultiplication;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
