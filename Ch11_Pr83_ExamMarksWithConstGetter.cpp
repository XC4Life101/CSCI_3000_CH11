#include <iostream>
#include <string>
using namespace std;

class Exam {
	private:
		float marks;

	public:
		void set(float marks);
		float get() const;
};

void Exam::set(float marks) 
{
	this->marks = marks;
}

float Exam::get() const 
{
	return marks;
}

int main()
{
	Exam myExam;
	float marks;

	cout << "Enter marks: ";
	cin >> marks;

	myExam.set(marks);

	cout << "Marks: " << myExam.get() << endl;

	return 0;
}