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
void PrintBin( UL  ulNumber)
{
	cout << "\n";
	for( register int i = 31; i >= 0 ; --i)
	{
		cout << ((ulNumber >> i ) & 1);
	}
	cout << "\n";
}
/**
*@brief		This function implements interface
*@param		[void]
*@return	void	
*/
void Running ( void )
{
	cout << "Hello enter please number of task [1-3,15-21]:\n";
	int iTaskNum;
	cin >> iTaskNum;
	int iNb1, iNb2;
	UL ulNb1;
	long lNb1, lNb2, lNb3;
	switch(iTaskNum)
	{
		case 1:
			cout << "Enter number:\n";
			cin	>> ulNb1;
			cout << "Entered number in binary :\n";
			PrintBin(ulNb1);
			cout << "\nResult:  " << NextEven ( ulNb1 ) << "\n";
			cout << "\nResult in binary:";
			PrintBin(ulNb1);
			break;
		case 2:
			cout << "Enter number_1 and number_2:\n";
			cin >> lNb1 >> lNb2;
			cout << "Entered number in binary :\n";
			cout << "1-st number: ";
			PrintBin ( lNb1 );
			cout << "2-nd number: ";
			PrintBin ( lNb2 ) ;
			Sorting ( lNb1, lNb2 );
			cout << "\nResult:  " ;
			cout << "\nSmallers number: " << lNb1;
			cout << "\nGreaters number: " << lNb2 << "\n" ;
			break;
		case 3:	
			cout << "Enter number:\n";
			cin	>> ulNb1;
			cout << "Enter two position of bits:\n";
			cin	>> iNb1 >> iNb2;
			cout << "Entered number in binary :\n";
			PrintBin ( ulNb1 );
			cout << "\nResult:  " << CheckTwoBits ( ulNb1, iNb1, iNb2 ) << "\n";
			break;
		case 15:	
			cout << "Enter number:\n";
			cin	>> ulNb1;
			cout << "Entered number in binary :\n";
			PrintBin(ulNb1);
			cout << "\nResult:  " << IsDegreeTwo ( ulNb1 ) << "\n";
			break;
		case 16:	
			cout << "Enter lengh and number of start bit:\n";
			cin	>> iNb1 >> iNb2;
			if( CheckNumBits ( iNb1 + iNb2 ) )
			{
				ulNb1 = BlockBits ( iNb1,iNb2);
				cout << "Result in dec:\n" << ulNb1;
				cout << "\nResult in binary:";
				PrintBin(ulNb1);
			}
			break;
		case 17:
			cout << "Enter number_1 and number_2:\n";
			cin >> lNb1 >> lNb2;
			cout << "Entered number in binary :\n";
			cout << "1-st number: ";
			PrintBin ( lNb1 );
			cout << "2-nd number: ";
			PrintBin ( lNb2 ) ;
			lNb3 = AbsSub ( lNb1, lNb2 );
			cout << "Result in dec:\n" << lNb3;
			cout << "\nResult in bin: ";
			PrintBin ( lNb3 );
			break;
		case 18:
			cout << "Enter number:\n";
			cin >> ulNb1;
			cout << "Entered number in binary :\n";
			PrintBin ( ulNb1 );
			cout << "Result :   " << CheckBt ( ulNb1 ) << "\n";
			break;
		case 19:
			cout << "Enter number:\n";
			cin >> ulNb1;
			cout << "\nEntered number in binary:";
			PrintBin ( ulNb1 );
			ChangeBits ( ulNb1 );
			cout << "Result in dec:\n" << ulNb1 << "\n";
			cout << "Result in binary:";
			PrintBin ( ulNb1 );
			break;
		case 20:
			cout << "Enter number and count of bits:\n";
			cin >> ulNb1 >> iNb1;
			if ( CheckNumBits ( iNb1 ) )
			{
				cout << "Entered number in binary:";
				PrintBin ( ulNb1 );
				ROL ( ulNb1, iNb1 );
				cout << "Result in dec :\n" << ulNb1 << "\n";
				cout << "Result in bin:";
				PrintBin ( ulNb1 );
			}
			break;
		case 21:
			cout << "Enter number\n";
			cin >> lNb1;
			cout << "Entered number in binary :\n";
			PrintBin(lNb1);
			cout << "\nResult:  " << MinNull ( lNb1 ) << "\n";
			break;
		default:
			cout << "Invalid task number!\n";
	}
}