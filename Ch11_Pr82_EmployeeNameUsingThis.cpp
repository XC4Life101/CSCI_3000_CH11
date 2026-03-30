#include <iostream>
#include <string>
using namespace std;

class Employee {
	private:
		string name;
		double salary;

	public:
		void set(string name, double salary);
		void display();
};

void Employee::set(string name, double salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::display() {
	cout << "Employee Name: " << name << endl;
	cout << "Employee Salary: " << salary << endl;
}

int main()
{
	Employee myEmployee;
	string name;
	double salary;

	cout << "Enter Employee name: ";
	getline(cin, name);

	cout << "Enter Employee salary: ";
	cin >> salary;

	myEmployee.set(name, salary);
	myEmployee.display();

	return 0;
}