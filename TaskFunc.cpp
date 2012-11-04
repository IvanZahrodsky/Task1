/**
*@file		TaskFunc.cpp
*@brief		This file contains implementations of function according to task
*			
*
*
*	Copyrights 2012 by IvanZahrodsky.
*/

#include "TaskFunc.h"
#include <iostream>
/**
*@brief		This function according to task ¹16 returns unsigned long integer 
*			that contains block of 1 bits length n starting with p bit
*@param		[iLengh,iStartBt] length and start of bits
*@return	unsigned long
*/
UL BlockBits ( int iLength,int iStartBt )
{	
	UL ulNumber = -1;

	ulNumber = ( ulNumber >> ( 32 - iLength - iStartBt ) ) & 
			   ( ulNumber << iStartBt );

	return ulNumber;
}

/**
*@brief		This function according to task ¹17 calculate absolute value 
*			subtraction two numbers
*@param		[uNumber1,lNumber2] two numbers
*@return	long
*/
long AbsSub ( long lNumber1, long lNumber2 )
{
	long lResult;
	lResult = lNumber1 - lNumber2;
	lResult = ( ( lResult >> 31 ) ^ lResult ) - ( lResult >> 31 );
	return lResult;
}

/**
*@brief		This function according to task ¹18 checked whether the number has
*			two 1 bits successively
*@param		[uNumber] numbers
*@return	bool
*/
bool CheckBt ( UL ulNumber )
{
	return !( ulNumber & ( ulNumber >> 1 ) );
}

/**
*@brief		This function according to task ¹19 changes every 4 bits
*@param		[ulNumber] number
*@return	void
*/
void ChangeBits ( UL &ulNumber )
{
	ulNumber = ( ( ulNumber & 0xF0F0F0F0 ) >> 4 ) | ( ( ulNumber & 0x0F0F0F0F ) << 4 );
}


/**
*@brief		This function according to task ¹20 implements cyclic shift left
*@param		[ulNumber,iCntBits] number and count of bits
*@return	void
*/
void ROL ( UL &ulNumber, int iCntBits )
{
	ulNumber = ( ulNumber << iCntBits ) | ( ulNumber >> ( 32 - iCntBits ) );
}

/**
*@brief		This function according to task ¹15 Checkchecks whether the number is a degrees of twos
*@param		[UL] 
*@return	bool
*/
bool IsDegreeTwo ( UL ulNumber )
{
	return ! (ulNumber & ( ulNumber - 1 ) );
}

/**
*@brief		This function according to task ¹21 return min(0, x)
*@param		[long] 
*@return	long
*/
long MinNull ( long lNumber)
{
	return ( ( ( 0 - lNumber ) >> 31 ) & 0 ) | 
		   ( ( ~( 0 - lNumber ) >> 31 ) & lNumber );
}

/**
*@brief		This function according to task ¹1 return next even number
*@param		[long]
*@return	long
*/
UL NextEven ( UL ulValue )
{
	return ( ulValue + !( ulValue & 1 ) + 1 );
}

/**
*@brief		This function according to task ¹2 sorting two number
*@param		[long,long]
*@return	void
*/
void Sorting( long& a, long& b)
{
	/**
	*	In first param smallers number
	*	In second greaters
	*/
	long temp1,temp2;
	temp1 = ( ( ( a - b ) >> 31 ) & a ) | ( ( ~ ( a - b ) >> 31 ) & b );
	temp2 = ( ( ( a - b ) >> 31 ) & b ) | ( ( ~ ( a - b ) >> 31 ) & a );
	a = temp1;
	b = temp2;
}

/**
*@brief		This function according to task ¹3 checks bits in two position
*@param		[UL,UC,UC]
*@return	UL
*/
bool CheckTwoBits ( UL num, int x, int y )
{
	return ( ( num & ( 1 << x ) ) ^ (num & ( 1 << y ) ) );
}