#include<iostream>
using namespace std;

int main()
{
	int i = 42,*p = &i,&r = i;
	decltype(*p) c = i; 
	return 0;
} 
