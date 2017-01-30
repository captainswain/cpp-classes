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
Program: ex_6b.cpp
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>

using namespace std;

int main(){
	char selection;
	cout << "List of famous sayings:" << endl;
	cout << "A.	Quote from Davinci." << endl;
	cout << "B.	Quote from Einstein." << endl;	
	cout << "C.	Quote from hitler." << endl << endl;
	cout << "Please make a selection: ";
	cin >> selection;
	switch(toupper(selection)){
		case 'A':
			cout << "\"I have from an early age abjured the use of meat, and the time will come when men such as I will look upon the murder of animals as they now look upon the murder of men.\" " << endl;
			break;
		case 'B':
			cout << "\"The pioneers of a warless world are the young men who refuse military service.\" " << endl;
			break;
		case 'C':
			cout << "\"What Luck for Rulers that Men Do Not Think\" " << endl;
			break;
		default:
			cout << "Invalid selection!";
			break;
	}
}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
MENU:
1.		Lobster
2.		Steak
3.		Turkey
4.		Hamburger
5.		Vegetarian Sandwich
Choose a dinner entree:5
Oh, so you're one of those!

==================================================================
*/
