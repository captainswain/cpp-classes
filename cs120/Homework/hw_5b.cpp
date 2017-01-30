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
Program: hw_5b
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>

using namespace std;

int main(){
	int number;
	cout << "Enter a Number: " << endl;
	cin >> number;
	if( number > 0){
		cout << "This number is positive.";
	}else if(number == 0){
		cout << "This number is equal to zero.";
	}else{
		cout << "This number is negative.";
	}
	}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Enter a Number:
12
This number is positive.

Shanes-MacBook-Air:Homework swain$ ./a.out
Enter a Number:
0
This number is equal to zero.

Shanes-MacBook-Air:Homework swain$ ./a.out
Enter a Number:
-16
This number is negative.

==================================================================
*/
