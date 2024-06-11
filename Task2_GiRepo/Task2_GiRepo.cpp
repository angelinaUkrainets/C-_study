#include <iostream>
using namespace std;

//task 1 - its impossible to make virtual constructors in cpp
class Rectangle {

protected: 
	Rectangle() {
		cout << "Constructor works" << endl;
	}
	~Rectangle()
	{
		cout << "Destructor works" << endl;
	}
};

class Square :public Rectangle {
public:
	Square() {
		cout << "Constructor square" << endl;
	}
	~Square()
	{
		cout << "Destructor square" << endl;
	}
};

//task 3 
class Shape
{
public:
	Shape();
	virtual ~Shape();
	Shape(const Shape&); //віртуальні конструктори не можна використовувати в с++
};


int main() {

	//task 2 
	//void SomeFunction(Shape);
	//Shape* pRect = new Rectangle; - для такого вказування, клас прямокутник має бути успадкований від класу фігура
	//SomeFunction(*pRect); - даний виклик функції є некоректним


}