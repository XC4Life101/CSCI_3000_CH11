#include <iostream>
#include <string>
using namespace std;

class Mobile  
{
	private:
		string brand;
		float price;

	public:
		Mobile(string brand, float price);
		void setPrice(float price);
		string getBrand() const;
		float getPrice() const;
};

Mobile::Mobile(string brand, float price) 
{
	this->brand = brand;
	this->price = price;
}

void Mobile::setPrice(float price)
{
	this->price = price;
}

float Mobile::getPrice() const
{
	return price;
}

string Mobile::getBrand() const
{
	return brand;
}

int main()
{
	Mobile myPhone("Samsung", 25000);

	myPhone.setPrice(2600);

	cout << "Brand: " << myPhone.getBrand() << endl;
	cout << "Price: " << myPhone.getPrice() << endl;

	return 0;
}