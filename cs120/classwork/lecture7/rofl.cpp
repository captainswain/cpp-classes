#include <iostream>
#include <string>
using namespace std;

char getInital();
string getName();
void showGreeting(char firstInitial, string name);

int main()
{
	char firstInitial;
	string name;

	firstInitial = getInital();
	name = getName();
	showGreeting(firstInitial,name);

	return 0;
}

char getInital()
{
	char initial;

	cout << "Enter your first initial: ";
	cin >> initial;
	cout << endl;

	return initial;
}

string getName()
{
	string name;

	cout << "Enter your last name: ";
	cin.ignore();
	getline(cin, name);
	cout << endl;

	return name;
}

void showGreeting(char firstInitial, string name)
{
	cout << "Your usermane is: " << firstInitial << name << endl
		<< endl;
}