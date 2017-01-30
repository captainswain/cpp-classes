#include <iostream>
#include <iomanip>

using namespace std;

const float TAX_RATE = 0.07;

int main()
{

	float febSales;
	float janSales;
	float marchSales;
	float totalSales;
	float totalTax;
	cout << "Please enter your january sales:";
	cin >> janSales;
	cout << "Enter February sale:";
	cin >> febSales;
	cout << "Enter March sale:";
	cin >> marchSales;
	totalSales = febSales + janSales + marchSales;
	totalTax = totalSales * TAX_RATE;
	cout << fixed << setprecision(2) <<  "The total sales for the first three months is $" << totalSales << endl;
	cout << fixed << setprecision(2) << "and the total amount of sales tax is $" << totalTax;

}

/*
==================================================================
Output
------------------------------------------------------------------
Shanes-MacBook-Air:Homework swain$ ./a.out
Please enter your january sales:100.3
Enter February sale:200.2
Enter March sale:300.5
The total sales for the first three months is $601.00
and the total amount of sales tax is $42.07

==================================================================
*/
