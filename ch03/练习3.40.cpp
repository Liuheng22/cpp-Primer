#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[]="daas",b[]="wqeq";
	char c[10];
	strcpy(c,a);
	strcat(c," ");
	strcat(c,b);
	cout << c << endl;
	return 0;
}
