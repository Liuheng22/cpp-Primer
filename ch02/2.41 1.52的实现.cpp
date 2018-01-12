#include<iostream>
#include<string>

using namespace std;
struct Sales_data{
	std::string bookNO;
	int unit_num;
	double revenue;
};
int main()
{
  	Sales_data book1,book2;
	double price;
	cin >> book1.bookNO >> book1.unit_num >> price;
	book1.revenue = book1.unit_num*price;
	cin >> book2.bookNO >> book2.unit_num >> price;
	book2.revenue = book2.unit_num*price;
	if(book1.bookNO==book2.bookNO)
	{
		
		book1.unit_num+=book2.unit_num;
		book1.revenue+=book2.revenue;
		cout << book1.bookNO <<' '<< book1.unit_num <<' '<< book1.revenue << endl;
		if(book1.unit_num!=0)
		{
			cout << book1.revenue/book1.unit_num << endl;
		}else
		{
			cout << "No sales!"<<endl;;
		}
		return 0;
	}else
	{
		cout << "Please input same book number!!!" << endl;
		return -1;
	}
}
