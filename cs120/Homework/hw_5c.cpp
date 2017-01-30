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
Program: hw_5c
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>

using namespace std;

int main(){
	int selection;
	cout << "MENU:" << endl;
	cout << "1.		Lobster" << endl;
	cout << "2.		Steak" << endl;	
	cout << "3.		Turkey" << endl;
	cout << "4.		Hamburger" << endl;	
	cout << "5.		Vegetarian Sandwich" << endl;
	cout << "Choose a dinner entree:";	
	cin >> selection;
	switch(selection){
		case 1:
			cout << "An excellent seafood choice";
			break;
		case 2:
			cout << "Top grade sirloin - the best!";
			break;
		case 3:
			cout << "A thanksgiving feast";
			break;
		case 4:
			cout << "World's best burger";
			break;
		case 5:
			cout << "Oh, so you're one of those!";
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
