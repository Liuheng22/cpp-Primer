#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string s1,sTotal;
	if(cin >> sTotal)
	{
		while(cin >> s1)
		{
			sTotal = sTotal + ' ' + s1;  
		}
		cout << sTotal << endl;
		return 0;
	}else
	{
		cout << "No Input!!!" << endl;
		return -1;
	}
} 
