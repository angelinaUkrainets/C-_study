#include <iostream>
using namespace std;

int main() {
	//task 1 
	//int *pOne; - ���������� ��������� �� ��� ���
	//int vTwo; - ���������� ����� ���� ���
	//int *pThree = &vTwo; - ���������� ��������� ���� ���, ���� ����� �� ������ ����� vTwo

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
	//�������� ������� �������������� �� ���� ������ ��� ��������� �� ����� �����

	//task 6
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int* pVar = &SomeVariable;
	*pVar = 9; //-��������� ���� � �������� * pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";

}