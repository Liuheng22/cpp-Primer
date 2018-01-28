#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vec1;
	int n;
	while(cin>>n)
	{
		vec1.push_back(n); 
	} 
	for(auto &i:vec1)
	{
		cout << ((i%2)!=0?i*2:i) << ' ' << endl;
	}
	return 0;
} 
