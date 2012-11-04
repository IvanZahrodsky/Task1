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


typedef unsigned long UL;
/**
*@brief		This function according to task ¹16 returns unsigned long integer 
*			that contains block of 1 bits length n starting with p bit.
*@param		[iLengh,iStartBt] length and start of bits
*@return	unsigned long
*/
UL BlockBits (int, int );

/**
*@brief		This function according to task ¹17 calculate absolute value 
*			subtraction two numbers
*@param		[lNumber1,lNumber2] two numbers
*@return	long
*/
long AbsSub (long , long );

/**
*@brief		This function according to task ¹18 checked whether the number has
*			two 1 bits successively
*@param		[lNumber] number
*@return	bool
*/
bool CheckBt ( UL );


/**
*@brief		This function according to task ¹19 changes every 4 bits
*@param		[ulNumber] number
*@return	void
*/
void ChangeBits ( UL & );

/**
*@brief		This function according to task ¹20 implements cyclic shift left
*@param		[ulNumber,iCntBits] number and count of bits
*@return	void
*/
void ROL ( UL &,int );
/**
*@brief		This function according to task ¹15 Checkchecks whether the number is a degrees of twos
*@param		[UL] 
*@return	bool
*/
bool IsDegreeTwo ( UL );
/**
*@brief		This function according to task ¹21 return min(0, x)
*@param		[long]
*@return	long
*/
long MinNull ( long );

/**
*@brief		This function according to task ¹1 return next even number
*@param		[UL]
*@return	UL
*/
UL NextEven ( UL );

/**
*@brief		This function according to task ¹2 sorting two number
*@param		[long,long]
*@return	void
*/
void Sorting ( long&, long& );

/**
*@brief		This function according to task ¹3 checks bits in two position
*@param		[UL,UC,UC]
*@return	UL
*/
bool CheckTwoBits ( UL, int, int );
#endif  //_TASK_FUNC_H_
