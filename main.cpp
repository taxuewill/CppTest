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
#include <string>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string str1 = "hello world";
    string str2 = str1;
    printf("Sharing the memory:\n");
    printf("\tstr1's address: %x\n", str1.c_str());
    printf("\tstr2's address: %x\n", str2.c_str());

    return 0;
}

