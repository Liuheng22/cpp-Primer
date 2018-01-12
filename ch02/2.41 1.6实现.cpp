#include<iostream>
#include<string>

using namespace std;
struct Sales_data{
	string bookNo;
	int units_sold;
	double revenue;
};
int main()
{
	Sales_data total;
	double price; 
	if(cin>>total.bookNo>>total.units_sold>>price)
	{
		total.revenue=total.units_sold*price;
		
		Sales_data trans;
		double transprice;
		while(cin>>trans.bookNo>>trans.units_sold>>transprice)
		{
			trans.revenue = trans.units_sold*transprice;
			
			if(trans.bookNo==total.bookNo)
			{
				total.units_sold+=trans.units_sold;
				total.revenue+=trans.revenue;
			}else
			{
				cout<<total.bookNo<<' '<<total.units_sold<<' '<<total.revenue<<endl;
				if(total.units_sold!=0)
				{
					cout << total.revenue/total.units_sold << endl;
				}else
				{
					cout<<"No Sales!!!" << endl;
				}
				total.bookNo = trans.bookNo;
				total.revenue = trans.revenue;
				total.units_sold = total.units_sold;
			}
		} 
		cout<<total.bookNo<<' '<<total.units_sold<<' '<<total.revenue<<endl;
		if(total.units_sold!=0)
			{
				cout << total.revenue/total.units_sold << endl;
			}else
			{
				cout<<"No Sales!!!" << endl;
			}
			return 0;
	}else
	{
		cout << "No Data!?" <<endl;
		return -1; 
	}
}
