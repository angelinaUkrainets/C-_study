#include <iostream>

using namespace std;

int Power(int num, int n);

int RoundNum(int num)
{
	int rem = num % 10;
	return rem >= 5 ? (num - rem + 10) : (num - rem);
}

//task 2 - class Employee
class Employee {
	short _age;
	short _yearsOfService;
	int _salary;

public:
	//task 3 - make access to fields of class (read and set)
	short getAge() const { return this->_age; }
	void setAge(short age) { this->_age = age; }
	short getYearsOfService() const { return this->_yearsOfService; }
	void setYearsOfService(short yearsOfService) { this->_yearsOfService = yearsOfService; }
	int getSalary() const { return this->_salary; }
	void setSalary(int salary) { this->_salary = salary; }

	//task 4 - set in constructor
	Employee() {
		_age = 0;
		_yearsOfService = 0;
		_salary = 0;
	}

	//task 6 - constructor with parameters
	Employee(short age, short yearsOfService, int salary) {
		_age = age;
		_yearsOfService = yearsOfService;
		_salary = salary;
	}
	~Employee(){}

	void printInfo() {
		cout << "Employee: age: " << _age << "\tyears of service : " << _yearsOfService << "\tsalary : " << _salary << endl;
	}

	//task 5 - print salary rounding to 10
	void whatSalary() {
		cout << "Salary is " << RoundNum(_salary) << endl;
	}
};

int main()
{
	int p = Power(2, 10);
	cout << "Power : " << p << endl;

	//task 4 - make 2 objects
	Employee empl1(24, 2, 12006), empl2(45, 20, 50061);
	empl1.printInfo();
	empl2.printInfo();

	//
	empl1.whatSalary();
	empl2.whatSalary();
}

//task1 - recurcion
int Power(int num, int n)
{
	if (n == 2)
		return num * num;
	return num * Power(num, n - 1);
}

//task7 - немає ; після оголошення класу
//task8 - відсутній сеттер та конструктор в оголошенні класу. слово private в даному випадку можна не писати, тому що поля по дефолту приватні
//task9 - потрібно щоб мейн був інт. поле даного класу приватне тому доступ до нього у користувача обмежений. відсутній конструктор 
//з параметрами, тому останній рядок мейна є помилковий