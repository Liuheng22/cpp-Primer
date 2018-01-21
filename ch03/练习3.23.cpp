#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> vec1;
	while(cin >> n)
	{
		vec1.push_back(n);
	}
	for(auto it = vec1.begin();it!=vec1.end();++it)
	{
		(*it)*=2;
	}
	for(auto i:vec1)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}
