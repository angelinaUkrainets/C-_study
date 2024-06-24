#include <iostream>
using namespace std;

//task1
//class Vehicle {
//public:
//	virtual void ShowInfo() = 0;
//	virtual void ChangeColor(string color) = 0;
//};
//
//class Bus : public Vehicle {
//	string _idNum, _color;
//	int _numOfSeats;
//
//public:
//	Bus() {
//		_idNum = "AC0934HA";
//		_color = "yellow";
//		_numOfSeats = 15;
//	}
//	~Bus(){}
//
//	void ShowInfo() {
//		cout << "Number: " << _idNum << "\tColor: " << _color << "\tNumber of seats: " << _numOfSeats << endl;
//	}
//	void ChangeColor(string color) {
//		_color = color;
//	}
//};
//
//class Car : public Vehicle {
//	string _idNum, _color;
//
//public:
//	Car() {
//		_idNum = "AX0284HA";
//		_color = "black";
//	}
//	~Car() {}
//
//	void ShowInfo() {
//		cout << "Number: " << _idNum << "\tColor: " << _color << endl;
//	}
//	void ChangeColor(string color) {
//		_color = color;
//	}
//};

//task2
class Vehicle {
public:
	virtual void ShowInfo() = 0;
	virtual void ChangeColor(string color) = 0;
};

void Vehicle::ShowInfo() { cout << "Abstract datatype" << endl; }

class Car : public Vehicle {

public:
	virtual void ShowInfo() = 0;
	virtual void Go() = 0;
};

void Car::ShowInfo() {
	cout << "Car" << endl;
	Vehicle::ShowInfo();
}

class SportsCar : public Car {
public:
	void ShowInfo() {
		cout << "Sports Car" << endl;
		Car::ShowInfo();
	}

	void Go() {
		cout << "Car is going" << endl;
	}

	void ChangeColor(string color) {
		cout << "Changing color" << endl;
	}
};

class Wagon : public Car {
public:
	void ShowInfo() {
		cout << "Wagon" << endl;
		Car::ShowInfo();
	}

	void Go() {
		cout << "Car is going" << endl;
	}

	void ChangeColor(string color) {
		cout << "Changing color" << endl;
	}
};

class Couple : public Car {
public:
	void ShowInfo() {
		cout << "Couple Car" << endl;
		Car::ShowInfo();
	}

	void Go() {
		cout << "Car is going" << endl;
	}

	void ChangeColor(string color) {
		cout << "Changing color" << endl;
	}
};

//task 3
class Animal {
	static int numOnFarm;
	string nameOfAnimal;

public:
	Animal(string name) {
		nameOfAnimal = name;
		numOnFarm++;
	}
	~Animal()
	{
		numOnFarm--;
	}

	void Show() {
		cout << "Animal : " << nameOfAnimal << "\tNum on farm : " << numOnFarm << endl;
	}
};

int Animal::numOnFarm = 0;

int main() {
	Wagon* w = new Wagon();
	w->ShowInfo();

	delete w;

	Animal dog("Dog"), cow("Cow"), horse("Horse");
	dog.Show();

	cow.~Animal();

	dog.Show();
}