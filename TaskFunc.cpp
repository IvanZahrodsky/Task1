/**
*@file		TaskFunc.cpp
*@brief		This file contains implementations of function according to task
*			
*
*
*	Copyrights 2012 by IvanZahrodsky.
*/

#include "TaskFunc.h"

/**
*@brief		This function according to task ¹16 returns unsigned long integer 
*			that contains block of 1 bits length n starting with p bit
*@param		[iLengh,iStartBt] length and start of bits
*@return	unsigned long
*/
unsigned long BlockBits(int iLength, int iStartBt)
{	
	unsigned long ulNumber = 0xFFFFFFFF;

	ulNumber = (ulNumber >> (32 - iLength - iStartBt)) & 
			   (ulNumber << iStartBt);

	return ulNumber;
}
