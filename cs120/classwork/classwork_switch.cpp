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
Program: hw_4a
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================

 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char vote;


	cout << "Who are you voting for?: " << endl;
	cin >> vote;
      switch (vote)
      {
         case 'a':
            cout << "you chose A";
            break;
         case 'b':
            cout << "you chose B";
            break;
        case 'c':
            cout << "you chose c";
        	break;    
         default:
            cout << "you chose something else";
      }



}