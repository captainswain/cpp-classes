#include <iostream>
#include <iomanip>
using namespace std;

const float INT_RATE = 0.05;

int main()
{

	double balance = 1000.00;
	double deposit = 0;
	double newBal = 0;
	double interest;
	cout << "Your present balance is " << fixed << setprecision(2) << balance;
	cout << "\nEnter the deposit amount:";
	cin >> deposit;
	newBal = deposit + balance;
	interest = ((newBal * INT_RATE) / 12);
	cout << "\n---- ACCOUNT SUMMARY ----\n";
	cout << "\nPrevious balance: $" << setw(9) << balance;
	cout << "\nDeposit Amount:   $" << setw(9) << deposit;
	cout << "\nNew Balance:      $" << setw(9) << newBal;
	cout << "\nMonthly Interest: $" << setw(9) << interest << endl;

	// cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	// cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	// cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	// cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
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
