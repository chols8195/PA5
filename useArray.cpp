/********************************************************
*Title: useArray.cpp
*Description: This is the file that will be used to create functions using arrays 
*to generate random numbers, print the array, check for dupes, and sort the array
*Author: Lisa Cho
*Created: March 11, 2024
*Summary of Modifications:
*   11 March 2024 - created the useArray file
*   11 March 2024 - created the functions for howMany(), fillArray(), printArray(), dupeCheck(), and sortArray 
*   12 March 2024 - fixed the dupeCheck() function, to actually check if there are duplicates
********************************************************/
#include "useArray.h"
#include <iostream>
    using std::cout;
    using std::cin;
    using std::cerr;
    using std::endl;
#include <string>
#include <array>
    using std::array;
#include <iomanip>
    using std::setw;
#include <ctime>
#include <cstdlib>
    using std::srand;
    using std::rand;
#include <algorithm>
    using std::sort;

//this function will tell the program how many numbers to generate (unsigned number, less than 100)
int howMany()
{
        int generateNum = 0;
        cout << "How many integers should the program generate?: ";
        cin >> generateNum;
        if (generateNum < 0 || generateNum > 100)
        //sets the range of the generated numbers between 0 and 100
        {
            throw "The input does not meet the requirement ( unsigned number < 100)";
        }
}

//this function will generate random values between 0 and 9999, and check for array size between 0 and 100
void fillArray(array<int,MAX_SIZE>& arr, int& size)
{
    if (size < 1 || size > 100)
        {
            return;
        }
    srand (static_cast<unsigned int>(time(0)));
    for (int index = 0; index < size; index++)
    {
        int randNum = 0 + rand() % 9999;
        //random number between 0 and 9999
        arr[index] = randNum;
        //add the random number to the array
    }
}

//this function will display the array 10 numbers per row
void printArray(array<int,MAX_SIZE>& arr, int& size)
{
    if (size < 1 || size > 100)
    {
        return;
    }
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
        //space between each random value added to the array
        if ((index + 1) % 10 == 0)
        /*this will insure that for each time the index increases, 
        once it reaches to 10 numbers it will print on a new line*/
        {
            cout << endl;
        }
    }

}

//this function will check for any duplicate numbers
bool dupeCheck(array<int,MAX_SIZE>& arr, int& size)
{
    if (size < 1 || size > 100)
    {
        return;
    }
    for (int index = 0; index < size; index++)
    {

        for (int check = index + 1; check < size; check++)
        {
            if(arr[check] == arr[index])
            {
                return false;
            }
            
        }
    }
    return true;
}

//this function will  arrange the elements of the array in ascending order
void sortArray(array<int,MAX_SIZE>& arr, int& size)
{
    for (int index = 0; index < size; index++)
    {
        sort(arr[index], arr[index] + index);
        //the sort will sort the array based on ascending order
    }
}