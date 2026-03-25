#include <iostream>
#include <string>
using namespace std;

class Book 
{
	private:
		string title;
		float price;

	public:
		void set(string t, float p);
		void display();
};

void Book::set(string t, float p) 
{
	title = t;
	price = p;
}

void Book::display() 
{
	cout << "Book Title: " << title << endl;
	cout << "Book Price: " << price << endl;
}

int main()
{
	Book ex_book;

	string inputT;
	float inputP;

	cout << "Enter book title: ";
	getline(cin, inputT);

	cout << "Enter book price: ";
	cin >> inputP;

	ex_book.set(inputT, inputP);
	ex_book.display();

	return 0;
}