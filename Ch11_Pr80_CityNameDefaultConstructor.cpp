#include <iostream>
#include <string>
using namespace std;

class City {
	private: 
		string name;

	public: 
		City();
		void display();
};

City::City() {
	name = "Montgomery";
}

void City::display() {
	cout << "City Name: " << name << endl;
}

int main()
{
	City myCity;
	
	myCity.display();

	return 0;
}