/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: fedosov
 *
 * Created on 12 ноября 2016 г., 13:44
 * modify history
 * 13.11.2016 - added this comment to check jenkins rerun
 */

#include <cstdlib>
#include <iostream>
#include "Helloer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Helloer helloer("world");
    cout << helloer.message()<<endl;
    return 0;
}

