/**
*@file		AddtFunc.cpp
*@brief		This file contains extra functions.
*			
*
*
*	Copyrights 2012 by IvanZahrodsky.
*/

#include "AddtFunc.h"

/**
*@brief		This function checks the entered number of bits
*@param		[iNumBits]	Number of bits
*@return	The result of checking
*/
bool CheckNumBits(int iNumBits)
{
	if(iNumBits > 32 || iNumBits < 0)
	{
		cout << " The number of bits is out of range! \n";
		return false;
	}
	else
	{
		return true;
	}
}


/**
*@brief		This function displays a number in binary
*@param		[Number]	Number
*@return	void	
*/
void PrintBin( unsigned long  ulNumber)
{
	cout << "\n";
	for( int i = 31; i >= 0 ; i--)
	{
		cout << ((ulNumber >> i ) & 1);
	}
	cout << "\n";
}