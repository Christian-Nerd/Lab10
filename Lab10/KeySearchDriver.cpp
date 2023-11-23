//*****************************************************************
//  Programmer: Trey Davis
//  Instructor: B.J Streller
//  Course: CS121
//  Date Created: 11/21/23
//  Input Files: keys.txt and values.txt 
//  Output Files: None
//  Date Modified: 11/21/23
//  Purpose: Find the index of each element of a set of keys in a value.
//****************************************************************

#include "KeySearch.h"
int main()
{
    // Initilization Variables
    fstream ValueFile, KeyFile; // Make Valuefile and Keyfile handles
    int SortedList[100];
    // Find the keys and values make a asorted array with the values and find if the kids are in the array
    ValueFile.open(GetKeyFile().c_str(), ios::in | ios::out);
    KeyFile.open(GetValueFile().c_str(), ios::in | ios::out);
    SortArray(SortedList);
    while (!KeyFile.eof())
    {
        int CurrentKey; // Current key in the keyfile
        KeyFile >> CurrentKey; // Assigns current key in the keyfile to CurrentKey
        int KeyIndex = BinarySearch(CurrentKey, 0, 100, SortedList); // Finds index of Current Key from the list via Binary Search
        // Outputs the proper result after getting the result of the binarysearch
        if (KeyIndex < 0)
        {
            cout << " Key value " << CurrentKey << " was not located in the sorted array.";
        }
        else
        {
            cout << " Key value " << CurrentKey << " was located at " << KeyIndex << " in the sorted array.";
        }
    }
    return 0;
}
