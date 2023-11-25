//*****************************************************************
//  Programmer: Trey Davis
//  Instructor: B.J Streller
//  Course: CS121
//  Date Created: 11/21/23
//  Input Files: keys.txt and values.txt 
//  Output Files: None
//  Date Modified: 11/25/23
//  Purpose: Find the index of each element of a set of intger keys in a value set.
//****************************************************************
#ifndef KeySearch.h
#include<fstream>  // For file stream manipulation
#include<iostream> // For cin & cout
#include<stdlib.h> // Streller you said always include this
using namespace std;
string GetKeyFile(); // Gets the keyfile name
string GetValueFile(); // Gets the value file name
void MakeValueArray(int Value[], // Array to make 
                    int SIZE, // Size of Array
                    fstream& File // Value File
                    ); // Getting Array from value file
void CheckIfValidFile(fstream& File, // File to check if valid
                      char TypeOfFile // Tells you if the file is a key or value file.
                     );
void SortArray(int Value[], // The array to be sorted
               int Size // Size of array
                ); // Array to sort
int BinarySearch( int Key, // Value you're looking for
                   int Left, // Left bound in a Binary Search
                   int Right, // Right bound in a Binary Search
                   int List[] // Array to be serched  
                   );


#endif