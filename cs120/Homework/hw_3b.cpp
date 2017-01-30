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
Program: hw_3c
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float num1;
	float num2;
	float result;

	cout << "Enter the base: ";
	cin >> num1;
	cout << "Enter the exponent: ";
	cin >> num2;

	result = pow(num1, num2);

	cout << fixed << setprecision(2) << num1 << " raised to the power of " << num2 << " equals " << result << endl;
	cout << fixed << setprecision(2) << "The square root of "<< num1 << " equals " << sqrt(num1) <<endl;
}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Enter the base: 8
Enter the exponent: 2
8.00 raised to the power of 2.00 equals 64.00
The square root of 8.00 equals 2.83
==================================================================
*/
