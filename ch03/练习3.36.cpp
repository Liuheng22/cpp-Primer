#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int n;
	vector<int> vec1,vec2;
//	int a[10],b[10],judge=0;
//	for(int i=0;i!=10;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0;i!=10;i++)
//	{
//		cin>>b[i];
//	}
//	for(int i=0;i!=10;i++)
//	{
//		if(a[i]!=b[i])
//		{
//			judge = 1;
//			break;
//		}
//	}
//	if(judge==1)
//	{
//		cout << "not same!!!" << endl;
//	}else
//	{
//		cout << "same!!" << endl;
//	}
	while(cin>>n)
	{
		vec1.push_back(n);
	}
	while(cin>>n)
	{
		vec2.push_back(n);
	}
	while(cin>>n)
	{
		vec2.push_back(n);
	}
	if(vec1==vec2)
	{
		cout << "same!!"<< endl;
	}else
	{
		cout << "not same!!" << endl;
	}
	return 0;
	
	
}
