#include <iostream>
using namespace std;

int main() {
	//task 1 
	//int *pOne; - оголошення вказівника на тип інт
	//int vTwo; - оголошення змінної типу інт
	//int *pThree = &vTwo; - оголошення вказівника типу інт, який вказує на адресу змінної vTwo

	//task 2
	//unsigned short yourAge;
	//unsigned short *pYourAge = nullptr;
	//pYourAge = &yourAge;

	//task 3
	int* a = nullptr;
	int b = 0;
	a = &b;

	cout << "B: " << b << endl;
	cout << "*A: " << *a << endl;

	b = 50;
	cout << "B = 50; B: " << b << endl;
	cout << "*A: " << *a << endl;

	//task 4
	int var1;
	int* pVar1 = &var1;

	*pVar1 = 100;
	cout << "Var 1 : " << var1 << endl;

	//task 5
	//int* pInt;
	//*pInt = 9;
	//cout << " The value at pInt: " << *pInt;
	//вказівник потрібно ініціалізовувати як нуль поінтер або посилання на якусь змінну

	//task 6
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int* pVar = &SomeVariable;
	*pVar = 9; //-правильно було б написати * pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";

}