/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Helloer.cpp
 * Author: fedosov
 * 
 * Created on November 12, 2016, 4:06 PM
 */

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer::Helloer(const string& aWho) {
    who = aWho;
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::~Helloer() {
}

string Helloer::message() const
{
    return (string)"Hello " + who; 
}

