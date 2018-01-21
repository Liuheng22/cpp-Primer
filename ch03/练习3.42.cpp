#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,a[10],j=0;
	vector<int> vec1;
	while(cin>>n)
	{
		vec1.push_back(n);
	}
	for(auto i:vec1)
	{
		a[j]=i;
		j++;
	}
	for(int i=0;i!=10;i++)
	{
		cout << a << ' ';
	}	
	return 0;
} 
