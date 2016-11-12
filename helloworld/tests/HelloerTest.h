/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   HelloerTest.h
 * Author: fedosov
 *
 * Created on Nov 12, 2016, 4:41:25 PM
 */

#ifndef HELLOERTEST_H
#define HELLOERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class HelloerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(HelloerTest);

    CPPUNIT_TEST(testMessage);

    CPPUNIT_TEST_SUITE_END();

public:
    HelloerTest();
    virtual ~HelloerTest();
    void setUp();
    void tearDown();

private:
    void testMessage();

};

#endif /* HELLOERTEST_H */

