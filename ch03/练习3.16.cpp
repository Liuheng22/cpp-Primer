#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> v7{10,"hi"};
	for(decltype(v7.size()) ix=0;ix<v7.size();ix++)
	{
		cout << v7[ix] << ' ';
	}
	return 0;
} 
