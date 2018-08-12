/*********************************************************************
** Program name: main.cpp
** Author: Nathan Smith
** Date: 7-27-18
** Description: main driver for recursive functions
*********************************************************************/

#include "libraryFunctions.hpp"
#include "recursiveFunctions.hpp"
#include <string>
#include <iostream>

int main()
{
    bool gameInPlay = true;
    while (gameInPlay)
    {
        int menuIn = getValidNumber("Please choose one of the following options:\n"
                                    "1. Print string in reverse.\n"
                                    "2. Calculate sum of integers.\n"
                                    "3. Calculate triangular number of integer N.\n"
                                    "4. Exit program.\n",
                                    "Please enter a number between 1 and 4.",
                                    0,
                                    5
                                    );
        switch(menuIn)
        {
            case 1:
            {
                std::string stringIn = getValidString("Please enter a string.",
                                                        "Please enter a valid string"
                                                        );
                std::cout << "Reversed String: ";
                printStringInReverse(stringIn);
                break;
            }
            case 2:
            {
                int arraySize = getValidNumber("How many integers would you like to sum?");
                int array[arraySize];
                for (int i = 0; i < arraySize; i++)
                {
                    array[i] = getValidNumber("Please enter a number.");
                }
                std::cout << "Sum: " << sumArrayIntegers(array, arraySize) << std::endl;
                break;
            }
            case 3:
            {
                int N = getValidNumber("Please enter N.");
                std::cout << "N: " << triangularNumberOfN(N) << std::endl;
                break;
            }
            case 4:
            {
                gameInPlay = false;
                std::cout << "Goodbye!" << std::endl;
                break;
            }
        }
    }
    
    return 0;
}