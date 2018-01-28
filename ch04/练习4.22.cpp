#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << (n>90?"high pass":n>75?"pass":n>60?"low pass":"fail")<<endl;
	return 0;
} 
