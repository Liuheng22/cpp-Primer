#include<iostream>
#include<string>

using namespace std;
typedef struct Sales_data{
	std::string bookNo;
	unsigned units_sold;
	double revenue;
}sales;

int main()
{
	sales book1;
	double price;
	cin >> book1.bookNo >> book1.units_sold >> price;
	book1.revenue = book1.units_sold*price;
	cout << book1.bookNo << ' ' << book1.units_sold << ' ' << book1.revenue << endl;
	return 0;
}
