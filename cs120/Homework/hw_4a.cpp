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
Program: hw_4a
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================

 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int total;



	cout << "Enter 5 integars: " << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;
	total = num1 + num2 + num3 + num4 + num5;
	cout << "The five integers you entered are:" << endl;
	cout << setw(10) << num1 << endl;
	cout << setw(10) << num2 << endl;
	cout << setw(10) << num3 << endl;
	cout << setw(10) << num4 << endl;
	cout << setw(10) << num5 << endl;
	cout << "The sum of the five numbers is " << total << endl;
	cout << setprecision(2) << fixed << "The average of the five numbers is " << float(total) / 5 << endl;


}