#include<iostream>
using namespace std;

int main()
{
	int i = 0,j = 1;
	int*p = &i;
	cout << i << '\t' << *p << '\t' << p << endl;
	*p = j;
	p = &j;
	cout << i << '\t' << *p << '\t' << p << endl;
	return 0; 
} 
