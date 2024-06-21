#include <iostream>
using namespace std;

//long (*funcPtr) (int); //вказівник на функцію яка приймає інт та повертає лонг
//long* Function(int); //звичайна функція приймає інт і вертає вказівник на тип лонг

void Square(int&, int&);
void Cube(int&, int&);
void Swap(int&, int&);
void GetVals(int&, int&);
void PrintVals(int&, int&);

int main() {
	void (*pFunc)(int&, int&);
	bool fQuit = false;

	int valOne = 1, valTwo = 2;
	int choice;

	while (!fQuit) {
		cout << "(0)Quit (1)Change values (2)Square (3)Cube (4)Swap :";
		cin >> choice;

		switch (choice)
		{
		case 1:
			pFunc = GetVals;
			break;
		case 2:
			pFunc = Square;
			break;
		case 3:
			pFunc = Cube;
			break;
		case 4:
			pFunc = Swap;
			break;
		default:
			pFunc = nullptr;
			fQuit = true;
			break;
		}

		if (fQuit)
			break;
		else {
			PrintVals(valOne, valTwo);
			pFunc(valOne, valTwo);
			PrintVals(valOne, valTwo);
		}
	}
}

void PrintVals(int &x, int &y) {
	cout << "x: " << x << " y: " << y << endl;
}

void Square(int& rX, int& rY) {
	rX *= rX;
	rY *= rY;
}

void Cube(int& rX, int& rY) {
	int tmp;
	tmp = rX;
	rX *= rX;
	rX *= rX;

	tmp = rY;
	rY *= rY;
	rY *= rY;
}

void Swap(int& rX, int& rY) {
	int temp;
	temp = rX;
	rX = rY;
	rY = temp;
}

void GetVals(int& rValOne, int& rValTwo) {
	cout << "New value for ValOne : ";
	cin >> rValOne;
	cout << "New value for ValTwo :";
	cin >> rValTwo;
}