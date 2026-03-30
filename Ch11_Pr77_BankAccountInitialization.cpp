#include <iostream>
using namespace std;

class BankAccount {
	private:
		float balance;

	public:
		BankAccount(float bal);

		void display();
};

BankAccount::BankAccount(float bal) {
	balance = bal;
}

void BankAccount::display() {
	cout << balance << endl;
}

int main()
{
	BankAccount acc1(500);
	BankAccount acc2(1200);
	BankAccount acc3(50);

	cout << "Account 1 Balance: ";
	acc1.display();

	cout << "Account 2 Balance: ";
	acc2.display();

	cout << "Account 3 Balance: ";
	acc3.display();

	return 0;
}