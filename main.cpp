/**
*@file		main.cpp
*@brief		This file contains the main function that implementing tasks.
*			
*
*
*	Copyrights 2012 by IvanZahrodsky.
*/
#include "AddtFunc.h"
#include "TaskFunc.h"

int main(int argc, char ** argv)
{
	//implementation of task ¹16
	int iLength;
	int iStartBt;
	cout << "Enter lengh and number of start bit:\n";
	cin	>> iLength >> iStartBt;
	bool bError;
	bError = CheckNumBits(iLength + iStartBt);
	if(bError)
	{
		unsigned long ulResult;
		ulResult = BlockBits(iLength,iStartBt);
		cout << "Result in dec:\n" << ulResult;
		cout << "\nResult in binary:";
		PrintBin(ulResult);
	}
	
	return 0;
}
