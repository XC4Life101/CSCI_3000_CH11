#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	string name;
	float price;

public:
	void set(string name, float price);
	void display();
};

void Product::set(string name, float price) {
	this -> name = name;
	this -> price = price;
}

void Product::display() {
	cout << "\nProduct Name: " << name << endl;
	cout << "Product Price: " << price << endl;
}

int main()
{
	Product item;

	string name;
	float price;

	cout << "Enter product name: ";
	getline(cin, name);

	cout << "Enter product price: ";
	cin >> price;

	item.set(name, price);
	item.display();

	return 0;

}