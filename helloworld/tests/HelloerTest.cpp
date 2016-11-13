/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   HelloerTest.cpp
 * Author: fedosov
 *
 * Created on Nov 12, 2016, 4:41:27 PM
 */

#include "HelloerTest.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(HelloerTest);

HelloerTest::HelloerTest() {
}

HelloerTest::~HelloerTest() {
}

void HelloerTest::setUp() {
}

void HelloerTest::tearDown() {
}

void HelloerTest::testMessage() {
    Helloer helloer("world");
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result == "Hello world");
    }
}

