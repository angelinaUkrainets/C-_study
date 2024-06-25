#include <iostream>
using namespace std;

//task 1
class Animal {
	static int numOnFarm;
	string nameOfAnimal;
	string color;
	string age;

public:
	Animal(string name, string color, string age) {
		nameOfAnimal = name;
		numOnFarm++;
		this->age = age;
		this->color = color;
		this->nameOfAnimal = nameOfAnimal;
	}
	~Animal()
	{
		numOnFarm--;
	}

	void Show() {
		cout << "Animal : " << nameOfAnimal << "\tNum on farm : " << numOnFarm << endl;
	}
	static int GetNumOnFarm() { return numOnFarm; }
	string GetColor() { return color; }
	string GetNameOfAnimal() { return nameOfAnimal; }
	string GetAge() { return age; }
};

int Animal::numOnFarm = 0;

int main() {
	//task 2 & 3
	Animal* an1 = new Animal("Dog", "Brown", "3");
	an1->Show();
	Animal* an2 = new Animal("Cow", "White-Black", "7");
	an2->Show();
	Animal* an3 = new Animal("Cat", "Red", "10");
	an3->Show();

	//task 4
	string (Animal:: * ptrGetColor)();
	ptrGetColor = &Animal::GetColor;

	cout << "Color of first animal is " << (an1->*ptrGetColor)() << endl;

	//task 5
	string(Animal:: * pGetSomeData)();
	int chooseVar = 0;
	do
	{
		cout << "(0)Quit (1)GetColor (2)GetName (3)GetAge" << endl;
		cin >> chooseVar;

		switch (chooseVar)
		{
		case 1:
			pGetSomeData = &Animal::GetColor;
			cout << "Color is ";
			break;
		case 2:
			pGetSomeData = &Animal::GetNameOfAnimal;
			cout << "Name is ";
			break;
		case 3:
			pGetSomeData = &Animal::GetAge;
			cout << "Age is ";
			break;
		default:
			cout << "QUIT" << endl;;
			pGetSomeData = nullptr;
			break;
		}

		if(pGetSomeData)
			cout << (an1->*pGetSomeData)() << endl;
	} while (chooseVar!=0);

	delete an1;
	cout << "Num after first delete: " << Animal::GetNumOnFarm() << endl;
	delete an2;
	cout << "Num after second delete: " << Animal::GetNumOnFarm() << endl;
	delete an3;
	cout << "Num after third delete: " << Animal::GetNumOnFarm() << endl;
}