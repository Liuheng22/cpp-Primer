#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int> vec1;
	while(cin>>i)
	{
		vec1.push_back(i);
	}
	for(int i:vec1)
	{
		cout << i << ' ';
	}
	cout << endl;
	vector<int> vec2 = vec1;
	for(int j:vec2)
	{
		cout<<j<<' ';
	}
	cout << endl;
	return 0;
} 
