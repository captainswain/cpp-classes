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
Program: hw_7c             	| Attached: hw_7b, 7c
------------------------------------------------------------------
Written by: Shane Lindsay	| Class: CMPR 120
==================================================================                                                     
 */
#include <iostream>
using namespace std;

bool getData(int & width, int & height);
bool isDataValid(int & width, int & height);
void printBox(int & width, int & height);



int main(){

int width;
int height;
bool response;
char input;
bool validData = false;
do{
	while (validData == false){
		validData = getData(width, height);
	}

	printBox(width, height);

	cout << "Do it again? (Y/N)";
	cin >> input;
	if(toupper(input) == 'Y'){
		response = true;
		validData = false;
		system("clear");

	}else{
		response = false;
		validData = false;
		cout << "Thanks for using this super app!";
	}
}while (response == true);


}
//===========================


//=====getAge function======== 
// gets the width and height data from user.
// width/height vars from main
// outputs a boolean based on valid data.
//============================
bool getData(int & width, int & height){
	bool validData = true;
	cout << "This program will draw a rectanglular box in stars.\n";
	cout << "The size will be determined by the width and height that you specify\n";
	cout << "Please Enter intergar values. The width should not be larger than 79.\n";
	cout << "Width and height must be larger than 1\n";
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;

	return validData = isDataValid(width, height);
}
//=====isDataValid function======== 
// Checks if the values given by user is valid.
// Input: width and height defined in main
// Returns a bool dependant on width/height contraints.
//============================
bool isDataValid(int & width, int & height){
	if(width >= 1 && width <= 79 && height >= 1){
		return true;
	} else{
		return false;
	}
}
//=====printBox function======== 
// Prints the box based on width and height(see input)
// Input: width and height defined in main
//output: outputs that beautiful box.
//============================
void printBox(int & width, int & height){
	cout << "Here is your box:\n \n";

	for (int i = 0; i < height; i++){
		for(int x = 0; x < width; x++){
			cout << "*";
		}
		cout << endl;
	}
}


/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
This program will draw a rectanglular box in stars.
The size will be determined by the width and height that you specify
Please Enter intergar values. The width should not be larger than 79.
Width and height must be larger than 1
Width: 5
Height: 5
Here is your box:

*****
*****
*****
*****
*****
Do it again? (Y/N)
==================================================================
*/