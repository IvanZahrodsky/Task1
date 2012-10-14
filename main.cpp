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
	cout << "Hello enter please number of task [16-20]:\n";
	int iTaskNum;
	cin >> iTaskNum;
	switch(iTaskNum)
	{
		case 16:
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
			break;
		case 17:
			long lNumber1;
			long lNumber2;
			long lResult;
			cout << "Enter number_1 and number_2:\n";
			cin >> lNumber1 >> lNumber2;
			cout << "Entered number in binary :\n";
			cout << "1-st number: ";
			PrintBin(lNumber1);
			cout << "2-nd number: ";
			PrintBin(lNumber2);
			lResult = AbsSub(lNumber1,lNumber2);
			cout << "Result in dec:\n" << lResult;
			cout << "\nResult in bin: ";
			PrintBin(lResult);
			break;
		case 18:
			unsigned long ulX;
			cout << "Enter number:\n";
			cin >> ulX;
			cout << "Entered number in binary :\n";
			PrintBin(ulX);
			cout << "Result :   " << CheckNumBt(ulX) << "\n";
			break;
		case 19:
			unsigned long ulNumber;
			cout << "Enter number:\n";
			cin >> ulNumber;
			cout << "\nEntered number in binary:";
			PrintBin(ulNumber);
			ChangeBits(ulNumber);
			cout << "Result in dec:\n" << ulNumber << "\n";
			cout << "Result in binary:";
			PrintBin(ulNumber);
			break;
		case 20:
			unsigned long ulNum;
			int iCntBits;
			cout << "Enter number and count of bits:\n";
			cin >> ulNum >> iCntBits;
			bool bErr;
			bErr = CheckNumBits(iCntBits);
			if(bErr)
			{
				cout << "Entered number in binary:";
				PrintBin(ulNum);
				ROL(ulNum,iCntBits);
				cout << "Result in dec :\n" << ulNum << "\n";
				cout << "Result in bin:";
				PrintBin(ulNum);
			}
			break;
		default:
			cout << "Invalid task number!\n";
	}
	return 0;
}
