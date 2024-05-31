#include <iostream>
using namespace std;

class Cat
{
public:
	Cat(int age) { itsAge = age; }
	~Cat() {}
	int GetAge() const { return itsAge; }

private:
	int itsAge;
};

Cat* MakeCat(int age);

int main() {
	//task 1
	int a = 5;
	int& b = a;
	int* c = &a;

	cout << "A: " << a << endl;
	cout << "&B: " << b << endl;
	cout << "*C: " << *c << endl;

	cout << endl << "Change pointer" << endl;

	b = 7;

	cout << "A: " << a << endl;
	cout << "&B: " << b << endl;
	cout << "*C: " << *c << endl;

	cout << endl << "Change ref" << endl;

	b = 10;

	cout << "A: " << a << endl;
	cout << "&B: " << b << endl;
	cout << "*C: " << *c << endl;

	//task 2

	/*int varOne = 10;
	const int* pointer = new const int;
	pointer = varOne;

	cout << "First iteration: \tVarOne: " << varOne << "\tPointer a: " << pointer << endl;

	varOne = 6;

	cout << "Second iteration: \tVarOne: " << varOne << "\tPointer a: " << pointer << endl;

	pointer = 7;

	cout << "Third iteration: \tVarOne: " << varOne << "\tPointer a: " << pointer << endl;

	int varTwo = 20;
	pointer = varTwo;
	cout << "Fourth iteration: \tVarOne: " << varOne << "\tPointer a: " << a << endl;*/

	//task 3
	//так як вказіник константний ві повинен бути відразу ініціалізований і не повинен змінюватись в процесі програми.

	//task 4
	int* strayPointer = new int;
	delete strayPointer;
	//task 5
	strayPointer = nullptr;

	//task 6
	int* memoryLeakP = new int;
	*memoryLeakP = 78;
	//task 7
	delete strayPointer;

	int age = 7;
	Cat *Boots = MakeCat(age);
	cout << "Boots is: " << Boots->GetAge() << " years old" << endl;

	delete Boots;
	Boots = nullptr;
	return 0;
}

Cat* MakeCat(int age)//dangerous method - can couse memory leak
{
	Cat* pCat = new Cat(age);
	return pCat;
}