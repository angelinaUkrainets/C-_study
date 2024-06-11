#include <iostream>
using namespace std;


int main() {
	//task 1
	char field[3][3];
	for(int i = 0; i<3; i++)
		for (int j = 0; j < 3; j++)
		{
			if (i % 2 == 0 && j % 2 == 0)
				field[i][j] = 'X';
			else
				field[i][j] = 'O';
		}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << " " << field[i][j] << " |";
		}
		cout << endl << "____________" << endl;
	}

	//task 2
	cout << "\nTask 2 - inicialising '0'\n" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			field[i][j] = 'O';

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << " " << field[i][j] << " |";
		}
		cout << endl << "____________" << endl;
	}

	//task 3 - виходить за межі масиву в циклі, і має бути до 5, а j до 4
	unsigned short SomeArray[5][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			SomeArray[i][j] = i + j;

	//task 4 - також виходить за межі, треба змінити знак на < у двох циклах
	unsigned short SomeArray[5][4];
	for (int i = 0; i <= 5; i++)
		for (int j = 0; j <= 4; j++)
			SomeArray[i][j] = 0;
}