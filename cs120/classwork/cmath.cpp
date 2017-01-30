#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main(){
	float num1;
	float num2;
	float result;
	//getline(cin, result);
	//fabs for absolute value
	cout << "Enter the base: ";
	cin >> num1;
	cout << "Enter the exponent: ";
	cin >> num2;

	result = pow(num1, num2);

	cout << fixed << setprecision(2) << num1 << " raised to the power of" << num2 << " equals" << result << endl;

}

