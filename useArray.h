/********************************************************
*Title: useArray.h
* Description: This is the header file for useArray.cpp, this file will store the predefine functions for useArray
* the main file
* Author: Lisa Cho
* Created: March 11, 2024
* Summary of Modifications:
*   11 March 2024 - created the header file for useArray
*   11 March 2024 - added in the functions and the constant integer
*********************************************************/
#ifndef USEARRAY_H
#define USEARRAY_H
#include <string>
    using std::string;
#include <array>
    using std::array;
#include <cstdlib>

//constant integer for the size of the array
const int MAX_SIZE = 100;

//returns an int
int howMany();

//this function will not return anything, but will generate random values between 0 and 9999
void fillArray(array<int,MAX_SIZE>&, int&);

//this function will not return anything
void printArray(array<int,MAX_SIZE>&, int&);

//this function will return a bool (true or false)
bool dupeCheck(array<int,MAX_SIZE>& , int&);

//this function will return nothing
void sortArray(array<int,MAX_SIZE>&, int&);

#endif
