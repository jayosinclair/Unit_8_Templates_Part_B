#include <iostream>
#include <cmath> //For round function.
using namespace std;

float halfF(float);
int halfI(int);

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << halfF(a) << endl;
	cout << halfF(b) << endl;
	cout << halfI(c) << endl;



	cout << endl << endl;
	system("pause");
	return 0;

}

//This can be converted into using generic data types to support floats and doubles.

float halfF(float value) {

	float result = value / 2.0;

	return result;

}

//This can be convered to using generic data types and when int, override.

int halfI(int value) {

	int result = 0;

	result = round(static_cast<float>(value / 2.0));

	return result;

}