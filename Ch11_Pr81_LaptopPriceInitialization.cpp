#include <iostream>
#include <string>
using namespace std;

class Laptop {
	private:
		float price;

	public:
		Laptop(float price);
		void display();
};

Laptop::Laptop(float price) {
	this->price = price;
}

void Laptop::display() {
	cout << price << endl;
}

int main()
{
	Laptop laptopA(45000);
	Laptop laptopB(62000);
	Laptop laptopC(81000);

	cout << "Laptop A Price: ";
	laptopA.display();

	cout << "Laptop B Price: ";
	laptopB.display();

	cout << "Laptop C Price: ";
	laptopC.display();

	return 0;
}