#include<iostream>
#include<vector> 
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string s;
	vector<string> vec1;
	while(cin>>s)
	{
		vec1.push_back(s);
	}
	for(auto i:vec1)
	{
		for(auto j:i)
		{
			j = toupper(j);
		}
	}
	for(auto it = vec1.cbegin();
	it != vec1.cend()&&!it->empty();++it)
	cout << *it << endl;
	return 0;
}
