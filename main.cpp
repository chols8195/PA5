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
    int size = 0;
    try
    {
        size = howMany();
        fillArray(arr, size);
        printArray(arr, size);
        if(dupeCheck(arr, size))
        {
            cout << "No duplicates found" << endl;
            /*using an if statement because the function will return as true unless it goes through the array and 
            finds a duplicate (arr[index] == arr[check])*/
        }
        else
        {
            cout << "Duplicates found" << endl;
        }
        sortArray(arr,size);
        printArray(arr, size);
    }
    catch(const char* error)
    {
        cout << "The input does not meet the requirement ( unsigned number < 100)" << endl;
    }

    return 0;
    
}
