#include<fstream>  // For file stream manipulation
#include<iostream> // For cin & cout
#include<stdlib.h> // Streller you said always include this
using namespace std;
//****************************************************************
// Function Name: SortArray
// Purpose: Sort array in ascenstion using selection sort
// Parameters: 
//     Input: Integer unsorted array 
//     Input & Output: None
//     Output: None
// Return Value: Void
// Non-local variables used: 
// Functions Called: std::swap & std::sizeof
//****************************************************************
void SortArray(int[] Value)
{
    int Size = sizeof(Value)/sizeof(Value[0]); // Size of array
    // Selection Sort                           
    for(int i = 0; i < Size; i++) 
    {
        int SmallestNumberIndex; // Index of Smallest Number in the array
        for(int j = i; j < Size-1; j++)
        {
            // Checking if the current smallest number is the smallest
            if(Value[j] > Value[j+1])
            {
                SmallestNumber = Value[j+1];
                // Checks if this is end of the list. 
                // Then swaps smallest number with the first value of the unsorted list.
                if(j == Size - 2)
                {
                    swap(Value[SmallestNumberIndex], Value[j+1]; 
                }
            }
        }
        
    }
}

//****************************************************************
// Function Name: GetKeyFile
// Parameters: None
// Return Value: File name of keyfile
// Non-local variables used: None lol
// Functions Called: none
//****************************************************************
string GetKeyFile()
{
    //Initializes Variables
    string KeyFileName; // It's namesake
    cin >> KeyFileName;
    //Return value gotten
    return KeyFileName;
}

//****************************************************************
// Function Name: GetValueFile
// Parameters: None
// Return Value: File name of valuefile
// Non-local variables used: None lol
// Functions Called: none
//****************************************************************
string GetValueFile()
{
    //Initializes Variables
    string KeyFileName; // It's namesake
    cin >> KeyFileName;
    //Return value gotten
    return KeyFileName;
}

//****************************************************************
// Function Name: Binary Search
// Purpose: Search the array for a specific key value and return it's location
// Parameters:
//    Input: Left Bound, Right Bound, Key
//    Input & Output: Integer Array
//    Output: 
// Return Value: int 
// Non-local Variables Used: None
// Functions Called: std::swap & std::sizeof()
//****************************************************************
void BinarySearch( int Key, int Left, int Right, int[] List)
{
    //int Mid = (Left + Right)/2; // The middle of the List.
    while(Left <= Right)
    {
        int Mid = (Left + Right)/2; // The middle of the List.
        if(Key == List[Mid])
            return Mid;
        else if(Key > List[Mid])
        {
            Left  = Mid + 1;
            continue;
        }
        else if(Key < List[Mid])
        {
            Right = List[Mid] - 1;
            continue;
        }
    }
    return -1; // This mean it isn't in the list
}

