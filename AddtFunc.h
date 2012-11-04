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
#include "TaskFunc.h"

using namespace std;

/**
*@brief		This function checks the entered number of bits
*@param		[iNumBits]	Number of bits
*@return	The result of checking
*/
bool CheckNumBits ( int );


/**
*@brief		This function displays a number in binary
*@param		[Number]	Number
*@return	void	
*/
void PrintBin( UL );
/**
*@brief		This function implements interface
*@param		[void]
*@return	void	
*/
void Running ( void );

#endif  //_ADDT_FUNC_H_

