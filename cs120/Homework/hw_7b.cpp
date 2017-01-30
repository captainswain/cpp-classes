/*
==================================================================
   _|_|_|  _|      _|  _|_|_|    _|_|_|          _|    _|_|      _|        
 _|        _|_|  _|_|  _|    _|  _|    _|      _|_|  _|    _|  _|  _|      
 _|        _|  _|  _|  _|_|_|    _|_|_|          _|      _|    _|  _|      
 _|        _|      _|  _|        _|    _|        _|    _|      _|  _|      
   _|_|_|  _|      _|  _|        _|    _|        _|  _|_|_|_|    _|                                                                                       
==================================================================
Information:
------------------------------------------------------------------
Program: hw_7b             	| Attached: hw_7b, 7c
------------------------------------------------------------------
Written by: Shane Lindsay	| Class: CMPR 120
==================================================================                                                     
 */
#include <iostream>
#include <string>
using namespace std;

void getRecord(int & id, string & name, float & gpa );
void displayRecord(int id, string name, float gpa);


int main(){

	int id;
	string name;
	float gpa;

	getRecord(id, name, gpa);
	displayRecord(id, name, gpa);



}
//=====gerRecord function======== 
// Gets user input based on keyboard
// Input: id, name, and gpa defined in main
//output: nothing
//============================
void getRecord(int & id, string & name, float & gpa ){
	cout << "Enter a student record:\n";
	cout << "ID: ";
	cin >> id;
	cin.ignore();
	cout << "Name: ";
	getline(cin, name);
	cout << "GPA: ";
	cin >> gpa;
}
//=====gerRecord function======== 
// clears console and shows the records.
// Input: id, name, and gpa defined in main
//output: displays text, returns nothing
//============================
void displayRecord(int id, string name, float gpa){
	system("clear");
	cout << "STUDENT RECORD" << endl;
	cout << "ID: " << id << endl;
	cout << "NAME: " << name << endl;
	cout << "GPA: " << gpa << endl;

}


/*
==================================================================
Output
==================================================================
STUDENT RECORD
ID: 12
NAME: Shane Lindsay
GPA: 3.25
Shanes-MacBook-Air:Homework swain$
==================================================================
*/