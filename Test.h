/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.h
 * Author: will
 *
 * Created on July 7, 2018, 3:55 PM
 */

#ifndef TEST_H
#define TEST_H

struct Student{
    Student():age(0){}
    int age;
};

 enum { NUM_BUFFER_SLOTS = 64 };
 
 typedef Student StudentType[NUM_BUFFER_SLOTS]; 
 
 enum weekday{sun,mon,tue,wed,thu,fri,sat};



#endif /* TEST_H */

