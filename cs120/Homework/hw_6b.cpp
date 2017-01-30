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
Program: hw_6b
------------------------------------------------------------------
Written by: Shane Lindsay
------------------------------------------------------------------
Class: CMPR 120
==================================================================

 */

#include <iostream>

using namespace std;


int main() {
	char userInput;
	char startingLetter;
	cout << "Do you want to see the alphabet in (U)ppercase and (l)owercase? ";
	cin >> userInput;
	if (toupper(userInput) == 'U') {
		startingLetter = 'A';
		do {
			cout << startingLetter << "\t";
			startingLetter++;
		} while (startingLetter <= 'Z');

	} else if (toupper(userInput) == 'L') {
		startingLetter = 'a';
		do {
			cout << startingLetter << "\t";
			startingLetter++;
		} while (startingLetter <= 'z');

	} else {
		cout << "The entry is incorrect.";
	}

}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Do you want to see the alphabet in (U)ppercase and (l)owercase? u
A	B	C	D	E	F	G	H	I	J		L	M	N	O	P	Q	R	S	T	U		W	X	Y	Z
Shanes-MacBook-Air:Homework swain$ ./a.out
Do you want to see the alphabet in (U)ppercase and (l)owercase? l
a	b	c	d	e	f	g	h	i	j		l	m	n	o	p	q	r	s	t	u		w	x	y	z
==================================================================
*/
