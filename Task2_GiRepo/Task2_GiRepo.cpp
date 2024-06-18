#include <iostream>
using namespace std;

class Rocket {
	int lenght, weight;

public:
	Rocket(int lenght = 0, int weight = 0) { this->lenght = lenght; this->weight = weight; }
	void Start(){ cout << "Rocket is starting" << endl; }
	~Rocket(){}
};

class Aiplane {
	int numOfSeats;

public:
	Aiplane(int numOfSeats = 0) { this->numOfSeats = numOfSeats; }
	void Fly() { cout << "The airplane is flying" << endl; }
	~Aiplane(){}
};

class JetPlane :public Rocket, public Aiplane {
	string color;

public:
	JetPlane(int lenght = 0, int weight = 0, int numOfSeats = 0, string color = "White") :Rocket(lenght, weight), Aiplane(numOfSeats) {
		this->color = color;
	}
	void Fly() { cout << "The JetPlane is flying" << endl; }
	void Start() { cout << "The JetPlane in starting" << endl; }
	~JetPlane(){}
};

class Boeing747 :public JetPlane {
	int idNumber;

public:
	Boeing747(int lenght = 0, int weight = 0, int numOfSeats = 0, string color = "White", int idNumber = 0) 
		: JetPlane(lenght, weight, numOfSeats, color) {
		this->idNumber = idNumber;
	}
	~Boeing747(){}
	void DoAllStaff() { 
		cout << "Boeing 747" << endl;
		Start();
		Fly(); 
	}
};


int main() {
	JetPlane* boeing = new Boeing747(32, 1000000, 321, "Black", 23);
	boeing->Fly();
	boeing->Start();

	Boeing747* boeing2 = new Boeing747(32, 1000000, 321, "Black", 23);
	boeing2->DoAllStaff();
}