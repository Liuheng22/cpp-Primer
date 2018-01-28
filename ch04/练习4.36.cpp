#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	double d = 2.0;
	i*=static_cast<int>(d);
	cout << i << endl;
	return 0;
}

