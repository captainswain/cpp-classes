/*
==================================================================
 ____              ____    ____           _      ___       __
/\  _`\    /'\_/`\/\  _`\ /\  _`\       /' \   /'___`\   /'__`\
\ \ \/\_\ /\      \ \ \L\ \ \ \L\ \    /\_, \ /\_\ /\ \ /\ \/\ \
 \ \ \/_/_\ \ \__\ \ \ ,__/\ \ ,  /    \/_/\ \\/_/// /__\ \ \ \ \
  \ \ \L\ \\ \ \_/\ \ \ \/  \ \ \\ \      \ \ \  // /_\ \\ \ \_\ \
   \ \____/ \ \_\\ \_\ \_\   \ \_\ \_\     \ \_\/\______/ \ \____/
    \/___/   \/_/ \/_/\/_/    \/_/\/ /      \/_/\/_____/   \/___/

==================================================================
Information
------------------------------------------------------------------
Program: hw_4d
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================

 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	int num4;
	int highestnum;
	cout << "The values in the file are: " << endl;
	ifstream inFile;
	inFile.open("./touchme"); // Please note i'm on a unix based operating system.

	if (inFile.fail())
	{
		cout << "something failed.";
		exit(0);
	}
	inFile >> num1 >> num2 >> num3 >> num4;
	inFile.close();
	if (num1 > num2)
	{
		highestnum = num1;
	} else {
		highestnum = num2;
	}
	if (num3 > num4)
	{
		if (highestnum < num3) {
			highestnum = num3;
		}
	} else {
		if (highestnum < num4) {
			highestnum = num4;
		}
	}
	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << "the highest number is: " << highestnum << endl;
}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
The values in the file are:
1
3
4
5
6
7
==================================================================
*/
