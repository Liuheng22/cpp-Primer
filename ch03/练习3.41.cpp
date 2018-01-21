#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	vector<int> vec1(a,a+3);
	for(auto i:vec1)
	{
		cout << i << ' ';
	}
	return 0;
}
