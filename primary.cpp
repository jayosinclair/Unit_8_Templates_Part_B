#include <iostream>
#include <cmath> //For round function.
using namespace std;



template <class Generic> //Generic data type can be used with both floats and doubles

Generic half(Generic value) {

	Generic result = value / 2.0;

	return result;

}

//Overloaded half function with non-templated/explicit data type int:

int half(int value) {

	int result = 0;

	result = round(static_cast<float>(value / 2.0));

	return result;

}


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