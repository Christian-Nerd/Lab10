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
void SortArray(int Value[], int Size)
{
    // Selection Sort                           
    for(int i = 0; i < Size; i++) 
    {
        int SmallestNumberIndex = i; // Index of Smallest Number in the array
        for(int j = i; j < Size-1; j++)
        {
            // Checking if the current smallest number is the smallest
            if(Value[SmallestNumberIndex] > Value[j+1])
            {
                SmallestNumberIndex = j+1;
                // Checks if this is end of the list. 
                // Then swaps smallest number with the first value of the unsorted list.
            }
            if(j == Size - 2)
            {
                swap(Value[i], Value[SmallestNumberIndex]); 
            }
        }
        
    }
}

//****************************************************************
// Function Name: GetKeyFile
// Purpose: Gets Key File Path
// Parameters: None
// Return Value: File name of keyfile
// Non-local variables used: None lol
// Functions Called: none
//****************************************************************
string GetKeyFile()
{
    //Initializes Variables
    string KeyFileName; // It's namesake
    cout << "Please input Key File Path: ";
    char CurrentStreamCharacter = cin.get(); // It's namesake.
    //Assign file name to KeyFileName even with whitespace
    while (CurrentStreamCharacter != '\n')
    {
        KeyFileName.push_back(CurrentStreamCharacter);
        CurrentStreamCharacter = cin.get(); // Retrives another character in the stream
    }
    //Return value gotten
    //Return value gotten
    return KeyFileName;
}

//****************************************************************
// Function Name: GetValueFile
// Purpose: Gets Value File Path
// Parameters: None
// Return Value: File name of valuefile
// Non-local variables used: None lol
// Functions Called: none
//****************************************************************
string GetValueFile()
{
    //Initializes Variables
    string ValueFileName; // It's namesake
    cout << "Please input Value File Path: ";
    char CurrentStreamCharacter = cin.get(); // It's namesake.
    //Assign file name to ValueFileName even with whitespace
    while (CurrentStreamCharacter != '\n')
    {
        ValueFileName.push_back(CurrentStreamCharacter);
        CurrentStreamCharacter = cin.get(); // Retrives another character in the stream
    }
    //Return value gotten
    return ValueFileName;
}

//****************************************************************
// Function Name: MakeValueArray
// Purpose: Makes an array from the value file
// Parameters: 
//      Input: Array, Array Size, and the value file
//      Input & Output:
//      Output:
// Return Value: Makes array from the value file values
// Non-local variables used: None lol
// Functions Called: std::sizeof
//****************************************************************
void MakeValueArray(int Value[], int Size, fstream& File)
{
    for(int i = 0; i < Size; i++) 
    {
        File >> Value[i];
        // If invalid input course correct
        while(!File)
        {
            string Dummy; // Stores away non integer characters
            File.clear();
            File >> Dummy; // Stores the errouneous characters
            File >> Value[i];
        }
    }
    File.seekg(ios::beg); // Put file back in it's first position after you make the array.
}


//***************************************************************
// Function Name: CheckIfValidFile
// Purpose: Checks if the "opened" key or value file actually opened and error checks if not
// Parameters: 
//      Input: fstream File, char TypeOfFile
//      Input & Output: None
//      Output: None
// Return Value: None
// Non-local variabels used: none
// Functions Called: istream.open(), string.c_str(), GetKeyFile(), GetValueFile()
//***************************************************************
void CheckIfValidFile(fstream& File, char TypeOfFile) 
{
    while (!File) 
    {
        cerr << "Invalid File Path please reenter file path" << endl;
        switch (TypeOfFile) 
        {
            case 'k': 
                File.clear();
                File.open(GetKeyFile().c_str(), ios::in | ios::out);
                break;

            case 'v': 
                File.clear();
                File.open(GetValueFile().c_str(), ios::in | ios::out);
                break;
        }
    }
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
// Functions Called: std::swap
//****************************************************************
int BinarySearch( int Key, int Left, int Right, int List[])
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
            Right = Mid - 1;
            continue;
        }
    }
    return -1; // This mean it isn't in the list
}

