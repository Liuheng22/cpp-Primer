#include<iostream> 
#include<vector>
using std::vector;
using std::cout;
using std::endl;
int main()
{
	vector<int> ivec1(10,42);
	vector<int> ivec2;
	for(int i=0;i<10;i++)
	{
		ivec2.push_back(42);
	}
	vector<int> ivec3(10);
	for(int i=0;i<10;i++)
	{
		ivec3[i] = 42;
	}
	for(auto i:ivec1)
	{
		cout << i << ' ';
	}
	cout<<endl;
	for(auto i:ivec2)
	{
		cout << i << ' ';
	} 
	cout<<endl;
	for(auto i:ivec3)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
} 
