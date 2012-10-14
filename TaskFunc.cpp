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
*@brief		This function according to task �16 returns unsigned long integer 
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

/**
*@brief		This function according to task �17 calculate absolute value 
*			subtraction two numbers
*@param		[uNumber1,lNumber2] two numbers
*@return	long
*/
long AbsSub(long lNumber1, long lNumber2)
{
	long lResult;
	lResult = lNumber1 - lNumber2;
	lResult = ((lResult >> 31) ^ lResult) - (lResult >> 31);
	return lResult;
}

/**
*@brief		This function according to task �18 checked whether the number has
*			two 1 bits successively
*@param		[uNumber] numbers
*@return	bool
*/
bool CheckNumBt(unsigned long ulNumber)
{
	return !(ulNumber & (ulNumber >> 1));
}

/**
*@brief		This function according to task �19 changes every 4 bits
*@param		[ulNumber] number
*@return	void
*/
void ChangeBits(unsigned long &ulNumber)
{
	ulNumber = ((ulNumber & 0xF0F0F0F0) >> 4) | ((ulNumber & 0x0F0F0F0F) << 4);
}


/**
*@brief		This function according to task �20 implements cyclic shift left
*@param		[ulNumber,iCntBits] number and count of bits
*@return	void
*/
void ROL(unsigned long &ulNumber,int iCntBits)
{
	ulNumber = (ulNumber << iCntBits) | (ulNumber >> (32 - iCntBits));
}