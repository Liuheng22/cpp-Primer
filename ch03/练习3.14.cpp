#include<iostream>
#include<vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int n = 0;
	vector<int> v1;
	while(cin>>n)
	{
		v1.push_back(n);
	}
//	cout << v1 << endl;
	return 0;
} 
