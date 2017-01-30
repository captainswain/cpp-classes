#include "prototypes.h"

int main()
{
	int number;
	string car;
	string color;
	getInfo(number, color, car);
	system("clear");
	showInfo(number, color, car);

	return 0;
}
//-------------------------


//-------------------------
void getInfo(int & number, string & color, string & car){
	cout << "Enter your lucky number: ";
	cin >> number;
	cin.ignore();
	cout << "Enter your favorite color: ";
	getline(cin, color);
	cout << "enter your favorite car: ";
	getline(cin, car);
}

//-------------------------
void showInfo(int number, string color, string car){
	cout << "Your Lucky number is " << number << ".\n";
	cout << "Your favorite color is" << color << ".\n";
	cout << "Your favorite car is " << car << ".\n\n";

}
//-------------------------