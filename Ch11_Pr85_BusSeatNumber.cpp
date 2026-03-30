#include <iostream>
#include <string>
using namespace std;

class BusSeat
{
	private:
		int seat;

	public:
		BusSeat(int seat);
		int get() const;
};

BusSeat::BusSeat(int seat){
	this->seat = seat;
}

int BusSeat::get() const{
	return seat;
}

int main()
{
	BusSeat mySeat(12);

	cout << "Seat Number: " << mySeat.get() << endl;

	return 0;
}