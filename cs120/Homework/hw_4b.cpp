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
Program: hw_4b
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================
                                                                 
 */
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
int age;
string name;
cout << "Please enter your age and press Enter: ";
cin >> age;
cout << "Please enter your first and last name and press Enter: ";
cin.ignore();
getline(cin, name);
cout << "Your name is " << name << ", and you are " << age << " years old."<< endl;

}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Please enter your age and press Enter: 19
Please enter your first and last name and press Enter: Shane lindsay
Your name is Shane lindsay, and you are 19 years old.
==================================================================
*/