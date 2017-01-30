#include <iostream>
#include <string>

using namespace std;
void showMessage(bool result);
bool getLogin(string & id, int & pw);
bool isValid( string id, int pw);


int main()
{
	bool result = false;
	string id;
	int pw;
	int count = 0;
	while ((result == false) && (count < 3)){
		result = getLogin(id, pw);
		system("clear");
		count++;
	}
	if (count == 3 && result == false){
		cout << "to many failed attempts.";
	}
	showMessage(result);

	return 0;
}
//-------------------------


//-------------------------
bool getLogin(string & id, int & pw){
	cout << "enter id: ";
	cin >> id;
	cout << "enter pw: ";
	cin >> pw;

	return isValid(id, pw);


}
bool isValid( string id, int pw){
 if((id == "red") && (pw = 12345)){
 	return true;
 }else{
 	return false;

 }

 }

 void showMessage(bool result){
 	if (result)
 			cout << endl << "you are logged in.";
 		else
 			cout << endl << "you are not logged in.";
 }

//-------------------------