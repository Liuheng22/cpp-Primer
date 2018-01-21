#include<iostream>
#include<iterator>
using namespace std;
int main()
{
	int a[10];
	int* abeg = begin(a);
	int* aend = end(a);
	while(abeg!=aend)
	{
		*abeg = 0;
		++abeg;
	}
	for(int i=0;i<10;i++)
	{
		cout << a[i] << ' ';
	}
	return 0;
}
