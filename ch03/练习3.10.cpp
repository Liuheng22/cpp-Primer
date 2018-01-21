#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	cin >> s1;
	for(auto c:s1)
	{
		if(!ispunct(c))
		{
			cout << c;
		}
	}
	cout << endl;
	return 0; 
} 
