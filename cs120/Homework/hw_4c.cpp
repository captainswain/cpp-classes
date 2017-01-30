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
Program: hw_4c
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>
#include <fstream> 

using namespace std;

int main(){
	int num1;
	int num2;
	int num3;
	cout << "Enter 3 values: " << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	ofstream outFile;
	outFile.open("./touchme", ios::app); // Please note i'm on a unix based operating system.
	if(outFile.fail())
	{
		cout << "something failed.";
		exit(0);
	}else{
		cout << "The data has been written to file." << endl;
	}
	outFile << num1 << endl << num2 << endl << num3; 
	outFile.close(); 

}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Enter 3 values:
1
3
4
The data has been written to file.

==================================================================
*/
