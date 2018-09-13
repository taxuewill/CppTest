/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: will
 *
 * Created on May 31, 2018, 9:53 AM
 */

#include <cstdlib>
#include <string.h>
#include <stdio.h>

using namespace std;

/*
 * 
 */
#include <iostream>
#include <memory>
#include <algorithm>
#include "Test.h"

int main(int argc, char** argv) {

    StudentType students;
    
    students[1].age = 10;
    
    cout<<students[0].age<<endl;
    cout<<students[1].age<<endl;
    cout<<students[2].age<<endl;
    enum weekday sunday = mon;
    printf("day is %d",sunday);
    return 0;
}

