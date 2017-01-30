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
Program: hw_3c
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>
#include <fstream> // Step #1

using namespace std;

int main(){
	int num1 = 22;
	int num2 = 33;
	int num3 = 44;
	int count;
	ofstream outFile; // step #2 - delcare an output file object.
	outFile.open("./touchme", ios::app); // step # 3 - open file
	if(outFile.fail())
	{
		cout << "WTF HAPPEND BREAH?";
		exit(0);
	}else{
		cout << "Everything worked out." << endl;
	}

outFile << num1 << endl << num2 << endl << num3; // step #4 - write to the file.
	for (int i = 0; i < num1; ++i)
	{
	outFile << "Random Output:" << i << endl;
	}
	outFile.close(); // step #5 - close the file.


	// result = pow(num1, num2);

	// cout << fixed << setprecision(2) << num1 << " raised to the power of " << num2 << " equals " << result << endl;
	// cout << fixed << setprecision(2) << "The square root of "<< num1 << " equals " << sqrt(num1) <<endl;
}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Enter the base: 8
Enter the exponent: 2
8.00 raised to the power of 2.00 equals 64.00
The square root of 8.00 equals 2.83
==================================================================
*/
