#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string name;
		
	public:
		Student();
		void display();
};

Student::Student() 
{
	name = "Unknown";
}

void Student::display() 
{
	cout << "Student Name: " << name << endl;
}

int main()
{
	Student obj;

	obj.display();

	return 0;
}