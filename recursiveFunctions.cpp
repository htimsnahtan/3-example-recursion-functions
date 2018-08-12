/*********************************************************************
** Program name: recursiveFunctions.hpp
** Author: Nathan Smith
** Date: 7-27-18
** Description: Implimentation file for 3 functions implimenting recursion 
*               (discussed in more depth in recursiveFunctions.hpp)
*********************************************************************/
#include "recursiveFunctions.hpp"
#include <string>
#include <iostream>

void printStringInReverse(std::string stringIn)
{
    if (stringIn.length() == 0) // base case
    {
        std::cout << std::endl;
        return;
    }
    char lastCharacter = *stringIn.rbegin();
    
    std::cout << lastCharacter;
    
    return printStringInReverse(stringIn.substr(0, stringIn.size()-1));
}

int sumArrayIntegers(int* arrayIn, int arraySizeIn)
{
    if (arraySizeIn < 0) // base case
    {
        return 0;
    }
    else
    {
        int lastValue = arrayIn[--arraySizeIn]; // decrement array size by 1 then get last value of array 
        return lastValue + sumArrayIntegers(arrayIn, arraySizeIn); // recursively call sumArrayIntegers w/
                                                                    // arraySizeIn not including last value
    }
}

// returns -1 if N input too large (over 32767)
// otherwise returns triangular number of N
int triangularNumberOfN(int Nin)
{
    if (Nin == 1) // base case
    {
        return 1;
    }
    else if (Nin >= 32767) // if N too large
    {
        return -1;
    }
    else
    {
        return Nin + triangularNumberOfN(Nin-1);
    }
}