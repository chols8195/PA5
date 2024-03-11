/*******************************************************
Name      :  Lisa Cho
Class     :  CSC 2312 Section 02
PA#       :  PA5 testing the functions created in useArray.cpp
Due Date  :  03/15/2024
*******************************************************/
#include "useArray.h"
#include <iostream>
    using std::cout;
    using std::cin;
    using std::cerr;
    using std::endl;
#include <string>
#include <array>
    using std::array;

int main()
{
    //this will display the functions.cpp
    array<int, MAX_SIZE>arr;
    int size = howMany();
    printArray(arr, size);

    //this will get user input and the random number
    int randNum;
    cout << "Enter in a number between 1-100: ";
    cin >> randNum;
    fillArray(arr, randNum);
    //reference the filArray function
    size += randNum;
    printArray(arr, size);
    return 0;
}