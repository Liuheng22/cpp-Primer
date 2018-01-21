#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	vector<string> v1;
	while(cin >> s)
	{
		v1.push_back(s);
	}
	for(decltype(v1.size()) iv=0;iv<v1.size();iv++)
	{
		for(decltype(string.size()) is=0;is<v1[iv].size();is++)
		{
			toupper(v1[iv][is]);
		}
		cout << v1[iv] << endl;
	}
	return 0;
}
