#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> vec1;
	while(cin>>n)
	{
		vec1.push_back(n);
	}
	for(auto i=vec1.begin(),j=i+1;j!=vec1.cend();i+=2,j+=2)
	{
		cout << *i + *j << ' ';
	}
	cout << endl;
	return 0;
} 
