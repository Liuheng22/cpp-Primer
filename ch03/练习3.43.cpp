#include<iostream>
#include<iterator>
using namespace std;
int main()
{
	int ia[3][4];
	for (int(&i)[4] : ia)
		for (int j : i)
		{
			cout << j << ' ';
		}
	cout << endl;
	for (int i = 0; i != 3; i++)
		for (int j = 0; j != 4; j++)
		{
			cout << ia[i][j] << ' ';
		}
	cout << endl;
	for (int (*i)[4]=ia;i!=end(ia);i++)
		for (int *j=*i;j!=end(*i);j++)
		{
			cout << *j << ' ';
		}
	cout << endl;
	getchar();
	return 0;
}
