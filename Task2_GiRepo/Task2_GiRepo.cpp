#include <iostream>

using namespace std;

//task1 - prototype of func perimeter
unsigned long Perimetr(unsigned short, unsigned short);

//task5
double Division(unsigned short x, unsigned short y) {
	if (y == 0)
		return -1;
	return x / y;
}

int main() {
	auto perimeter = Perimetr(10, 2);
	cout << "Perimeter : " << perimeter << endl;

	//task6
	unsigned short x, y;
	double res = 0;

	cout << "Please, enter two numbers\n";
	cin >> x;
	cin >> y;
	res = Division(x, y);
	cout << "Result of division is : " << res << endl;
}

//task2 - counting of perimeter
unsigned long Perimetr(unsigned short length, unsigned short width)
{
	cout << "Rectangle:\nLength : " << length << endl;
	cout << "Width : " << width << endl;

	return length*2+width*2;
}


//task3 - bugs
//змінна х не ініціалізована - містить в собі якусь комірку з памяті
//при передачі параметрів в функцію прописаний тільки тип даних, але функція не зможе порахувати, тому що не знає що саме їй потрібно
//а основне функція типу воід не може нічього повертати

//task4 - bugs
//змінна х не має нічого в собі
//крапка з комою при реалізації функції не повинна стояти після () таких дужок