/**
*@file		TaskFunc.h
*@brief		This file contains interface of function according to task
*			
*
*
*	Copyrights 2012 by IvanZahrodsky.
*/

#ifndef _TASK_FUNC_H_
#define _TASK_FUNC_H_

/**
*@brief		This function according to task ¹16 returns unsigned long integer 
*			that contains block of 1 bits length n starting with p bit.
*@param		[iLengh,iStartBt] length and start of bits
*@return	unsigned long
*/
unsigned long BlockBits(int iLength, int iStartBt);

/**
*@brief		This function according to task ¹17 calculate absolute value 
*			subtraction two numbers
*@param		[uNumber1,lNumber2] two numbers
*@return	long
*/
long AbsSub(long lNumber1, long lNumber2);

/**
*@brief		This function according to task ¹18 checked whether the number has
*			two 1 bits successively
*@param		[uNumber] numbers
*@return	bool
*/
bool CheckNumBt(unsigned long lNumber);


#endif  //_TASK_FUNC_H_
