
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	// char character;
	// short int_2;
	// int int_4;
	// long long int_8;
	// float floatAmt;
	// double doubleAmt;
	cout << "char: " << sizeof(char) << " byte \n"
		 << "short: " << sizeof(short) << " bytes \n"
		 << "int: " << sizeof(int) << " bytes \n"
		 << "long: " << sizeof(long long) << " bytes \n"
		 << "float: " << sizeof(float) << " bytes \n"
		 << "double: " << sizeof(double) << " bytes \n\n";
	return 0;
}

/*
==================================================================
Output
------------------------------------------------------------------
./inclass
char: 1 byte
short: 2 bytes
int: 4 bytes
long: 8 bytes
float: 4 bytes
double: 8 bytes

==================================================================
*/
