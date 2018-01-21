#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> ivec1;
	while(cin>>n)
	{
		ivec1.push_back(n);
	}
	for(int i=0,j=ivec1.size()-1;i<j;i++,j--)
	{
		cout << ivec1[i]+ivec1[j] << endl;
	}
	return 0;
} 
