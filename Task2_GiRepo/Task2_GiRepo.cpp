#include <iostream>
#include "Point.h"
using namespace std;

//Homework 3
int main() {
	Rectangle mRect(100, 20, 50, 80);
	int area = mRect.GetArea();
	cout << "Area : " << area << endl;
}