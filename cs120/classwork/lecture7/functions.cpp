#include <iostream>

using namespace std;

int getAge(); // #1 create prototype above main.
void showAge(int age);


int main(){

	int age;
	age = getAge(); // #2 function called inside main()
	showAge(age);

}
//===========================


//=====getAge function======== 
//description
//input
//output
//============================
int getAge(){  // #3 Function definition after main ()
	int age;

	cout << "What is your age? ";
	cin >> age;

	return age;
}
//------------
void showAge(int age){

	cout << "you are " << age << " Years old.";
}