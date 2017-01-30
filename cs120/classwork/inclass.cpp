#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float janSales = 2222.0;
	float febSales = 12345.88;
	float marchSales = 333.1234;
	cout << fixed << setprecision(2);
	double num = 12345.123456789;
	cout << "=== Quarterly Sales === \n\n"
		<< left << setw(8) << "January: " << right << setw(10) << janSales << endl << endl
		<< left << setw(8) << "February: " << right << setw(10) << febSales << endl << endl
		<< left << setw(8) << "march: " << right << setw(10) << marchSales << endl << endl;
}