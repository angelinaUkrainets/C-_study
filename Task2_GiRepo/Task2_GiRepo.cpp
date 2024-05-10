#include <iostream>

using namespace std;

int main() {
	//task1
	cout << "HW 4 - operations\n\nTask 1\n";

	int num1, num2;
	cout << "Input first number : ";
	cin >> num1;
	cout << "Input second number : ";
	cin >> num2;

	if (num1 > num2)
	{
		num1 = num2;
		cout << "First number is bigger\n";
	}
	else {
		num2 = num1;
		cout << "Second number is bigger\n";
	}

	//task2-3
	//description : програма просить ввести 3 числа
	//дал≥ в оператор≥ ≥ф прогама присвоюЇ р≥зницю а-б зм≥нн≥й с.
	//€кби в оператор≥ було 2 дор≥внюЇ тод≥ б в≥н просто перев≥р€в чи р≥зниц€ а ≥ б р≥вна с.

	cout << "\nTask2-3\n";

	int a, b, c;

	cout << "Please enter three numbers) \n";

	cout << "a: ";

	cin >> a;

	cout << "\nb: ";

	cin >> b;

	cout << "\nc: ";

	cin >> c;

	if (c = (a - b))

	{

		cout << "\na: ";

		cout << a;

		cout << " minus b: ";

		cout << b;

		cout << " equals c: ";

		cout << c << endl;

	}

	else

		cout << "a - b does not equal c: " << endl;

	//task4-5
	//в оператор≥ програма буде присвоювати зм≥нн≥й с р≥зницю а ≥ б. 
	//тобто на виход≥ ми отримаЇмо 0, але в ≥ф програма не зайде, так €к результат 0

	cout << "\nTask4-5\n";

	a = 1; 
	b = 1;

	if (c = (a - b))

		cout << "The value of c is: " << c;

	return 0;
}