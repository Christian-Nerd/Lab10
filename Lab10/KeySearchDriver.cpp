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
    fstream ValueFile, KeyFile;
    ValueFile.open(GetKeyFile().c_str(), ios::in | ios::out);
    KeyFile.open(GetValueFile().c_str(), ios::in | ios::out);

    return 0;
}
