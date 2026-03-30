#include <iostream>
#include <string>
using namespace std;

class Movie {
	private:
		string name;
		float price;

	public:
		void set(string name, float price);
		void display();
};

void Movie::set(string name, float price) {
	this->name = name;
	this->price = price;
}

void Movie::display() {
	cout << "\nMovie Name: " << name << endl;
	cout << "Ticket Price: " << price << endl;
}

int main()
{
	Movie myMovie;
	string name;
	float price;

	cout << "Enter movie name: ";
	getline(cin, name);

	cout << "Enter Ticket Price: ";
	cin >> price;

	myMovie.set(name, price);
	myMovie.display();

	return 0;
}