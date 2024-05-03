#include <iostream>
#include <limits>
using namespace std;

template<typename T>
void showMinMax() {
	cout << "min : " << numeric_limits<T>::min() << endl;
	cout << "max : " << numeric_limits<T>::max() << endl;
	cout << endl;
}

int main() {
	cout << "The size of int is: " << sizeof(int) << " bytes\n";
	cout << "The size of short int is: " << sizeof(short) << " bytes\n";
	cout << "The size of long int is: " << sizeof(long) << " bytes\n";
	cout << "The size of char is: " << sizeof(char) << " bytes\n";
	cout << "The size of float is: " << sizeof(float) << " bytes\n";
	cout << "The size of double is: " << sizeof(double) << " bytes\n";
	cout << "The size of bool is: " << sizeof(bool) << " bytes\n";

	cout << "short: " << endl;
	showMinMax<short>();

	cout << "int: " << endl;
	showMinMax<int>();

	cout << "double: " << endl;
	showMinMax<double>();

	cout << "char: " << endl;
	showMinMax<char>();

	cout << "bool: " << endl;
	showMinMax<bool>();
}
