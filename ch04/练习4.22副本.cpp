#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n>90)
	cout << "high pass";
	else if(n>75)
	cout << "pass";
	else if(n>60)
	cout << "low pass";
	else
	cout << "fail";
	cout << endl;
	return 0; 
}
