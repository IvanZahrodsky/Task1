/**
*@file		AddtFunc.h
*@brief		This file contains interface of extra functions.
*			
*
*
*	Copyrights 2012 by IvanZahrodsky.
*/

#ifndef _ADDT_FUNC_H_
#define _ADDT_FUNC_H_

#include <iostream>

using namespace std;

/**
*@brief		This function checks the entered number of bits
*@param		[iNumBits]	Number of bits
*@return	The result of checking
*/
bool CheckNumBits(int iNumBits);


/**
*@brief		This function displays a number in binary
*@param		[Number]	Number
*@return	void	
*/
void PrintBin( unsigned long ulNumber);



#endif  //_ADDT_FUNC_H_

