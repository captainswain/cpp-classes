#include <iostream>

using namespace std;


float calcArea (float width, float height = 10);
void showArea(float area);

int main(){
	float width;
	float height;
	float area;

	cout << "Enter a width:" << endl;
	cin >> width;
	cout << "Enter a height:" << endl;
	cin >> height;

	if (height >= 10){
		area = calcArea(width, height);
	}else{
		area = calcArea(width);
	}

	showArea(area);
	return 0;
}
//------------------
float calcArea (float width, float height){
	return  width * height;
}
//------------------
void showArea(float area){

	cout << "The area equeals " << area << endl << endl;

}