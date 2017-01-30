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
Program: hw_5a
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>
#include <fstream> 

using namespace std;

int main(){
	char character;
	cout << "Enter a keyboard character and presse enter: " << endl;
	cin >> character;
	if( character >='a' && character <='z'){
		cout << "This character is alphabetic.";
	}else{
		cout << "This character is not an  alphabetic character.";
	}
	}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Enter a keyboard character and presse enter:
12
This character is not an  alphabetic character.
Shanes-MacBook-Air:Homework swain$ ./a.out
Enter a keyboard character and presse enter:
a
This character is alphabetic.

==================================================================
*/
