#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> ivec(11,0);
	int n;
	while(cin>>n)
	{
		if(n<=100)
		{
			++*(ivec.begin()+n/10);
		}
	}
	for(auto i:ivec)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}
