/*********************************************************************
** Program name: recursiveFunctions.hpp
** Author: Nathan Smith
** Date: 7-27-18
** Description: Declaration of 3 functions implimenting recursion
*                   1. printStringInReverse() which prints reverse of string to
*                       console
*                   2. sumArrayIntegers() which uses recrusion to sum the
*                       value of an array of integers.
*                   3. triangularNumberOfN() which calculates the triangular number
*                       of an integer N
*********************************************************************/
#ifndef RECURSIVE_FUNCTIONS_HPP
#define RECURSIVE_FUNCTIONS_HPP

#include <string>

void printStringInReverse(std::string);

int sumArrayIntegers(int*, int); 

int triangularNumberOfN(int);

#endif