/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: fedosov
 *
 * Created on Nov 12, 2016, 4:28:47 PM
 */

#include "newtestclass.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testMessage() {
    Helloer helloer;
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

