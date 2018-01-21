#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m = 0;
	vector<int> ivec;
	while(cin>>n)
	{
		m++;
		ivec.push_back(n);
	}
	for(int i=0,j=1;j<m&&i<m;i+=2,j+=2)
	{
		cout << ivec[i]+ivec[j] <<endl;
	}
	return 0;
}
