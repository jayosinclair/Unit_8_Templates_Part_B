#include <iostream>
using namespace std;

float half(float);
int half(int);

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;



	cout << endl << endl;
	system("pause");
	return 0;

}

//This can be converted into using generic data types to support floats and doubles:

float half(float value) {

	float result = value / 2.0;

	return result;

}

//This can be convered to using generic data types and when int, override.

int half(int value) {

	int result = ceil(value / 2.0);

	return result;

}