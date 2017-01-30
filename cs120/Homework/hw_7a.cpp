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
Program: hw_7a              	| Attached: hw_7a
------------------------------------------------------------------
Written by: Shane Lindsay	| Class: CMPR 120
==================================================================                                                     
 */
#include <iostream>
#include <cmath>
using namespace std;

float getSide();
float calcSideC(float sideA, float SideB);


int main(){

	float sideA;
	float sideB;
	float sideC;
	cout << "Side A: " << endl;
	sideA = getSide();
	cout << "Side B: " << endl;
	sideB = getSide();
	sideC = calcSideC(sideA, sideB);
	cout << "The dimension of side C is: " << sideC << "." << endl;


}

float getSide(){
	float dimension;
	cout << "Please Enter the dimension: ";
	cin >> dimension;
	return dimension;
}

float calcSideC(float sideA, float sideB){
	float sideC;
	sideC = sqrt((pow(sideA, 2) + pow(sideB, 2)));

	return sideC;


}
/*
==================================================================
Output
==================================================================
Shanes-MacBook-Air:Homework swain$ ./a.out
Side A:
Please Enter the dimension: 5
Side B:
Please Enter the dimension: 12
The dimension of side C is: 13.
==================================================================
*/