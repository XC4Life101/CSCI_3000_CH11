#include <iostream>
#include <string>
using namespace std;

class Fan 
{
	private:
		float speed;

	public:
		Fan();
		void set(float speed);
		float get() const;
};

Fan::Fan() 
{
	speed = 0;
}

void Fan::set(float speed) 
{
	this->speed = speed;
}

float Fan::get() const
{
	return speed;
}

int main()
{
	Fan myFan;	
	float speed;

	cout << "Enter fan speed: ";
	cin >> speed;

	myFan.set(speed);

	cout << "Fan speed: " << myFan.get() << endl;

	return 0;
}