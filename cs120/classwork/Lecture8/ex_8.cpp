#include "Header.h"

bool getLogin(string & id, int & pin);
bool isValid(string id, int pin);
void showMessage(bool result);

int main()
{
	bool result = false;
	int count = 0;
	string id;
	int pin;


	while ((result == false) && (count < 3))
	{
		result = getLogin(id, pin);
		count++;
	}
	
	if ((count == 3) && (result == false))
	{
		cout << "Three failed log in attempts...";

	}

	showMessage(result);

	return 0;
}

//=========================================================

bool getLogin(string & id, int & pin)
{
	cout << "Enter your ID:";
	cin >> id;
	cout << "Enter your Personal ID Number:";
	cin >> pin;

	return isValid(id, pin);
}

//=========================================================

bool isValid(string id, int pin)
{
	if ((id == "cmacy") && (pin == 3333))
	{
		system("cls");
		return true;
	}
	else
	{
		system("cls");
		cout << "Invalid Name or Password" << endl;
		return false;
	}
}

//=========================================================

void showMessage(bool result)
{
	if (result == true)
	{
		cout << "You are logged in..." << endl
			<< endl;
	}
	else
	{
		cout << "You are not logged in..." << endl
			<< endl;
	}

}