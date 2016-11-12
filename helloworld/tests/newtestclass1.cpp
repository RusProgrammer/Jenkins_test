/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass1.cpp
 * Author: fedosov
 *
 * Created on Nov 12, 2016, 4:38:12 PM
 */

#include "newtestclass1.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass1);

newtestclass1::newtestclass1() {
}

newtestclass1::~newtestclass1() {
}

void newtestclass1::setUp() {
}

void newtestclass1::tearDown() {
}

void newtestclass1::testMessage() {
    Helloer helloer;
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

