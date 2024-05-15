#include <iostream>
#include "Point.h"
using namespace std;

int main() {
	//task2 - array 10x10
	int arr[10][10];

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			arr[i][j] = 0;

	//task3 - for from 100 to 200
	for (int i = 100; i <= 200; i+=2)
	{
		cout << "Iteration: " << i << endl;
	}

	//task4 - while from 100 to 200
	int counter = 100;
	while (counter <= 200) {
		cout << "Iteration(while): " << counter << endl;
		counter += 2;
	}

	//task5 - do..while from 100 to 200
	counter = 100;
	do
	{
		cout << "Iteration(do..while): " << counter << endl;
		counter += 2;
	} while (counter<=200);
}

//task1 - 99
//task6 - пропущена ; в cout, а також оскільки каунтер не збільшується, то цикл зациклюється
//task7 - має бути ; після другого параметру , а також не має бути ; після фора
//task8 - щоб даний цикл працював то знак в циклы повинен бути >