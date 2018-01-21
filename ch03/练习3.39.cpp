#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin >> s1;
	cin >> s2;
	if(s1>s2)
	{
		cout << s1 << endl;
	}else
	{
		cout << s2 << endl; 
	}
	char a[] = "dadasad";
	char b[] = "dasdasds";
	if(strcmp(a,b)>0)
	{
		cout << a << endl;
	}else
	{
		cout << b << endl; 
	}
	return 0;
} 
