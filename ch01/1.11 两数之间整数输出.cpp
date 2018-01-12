#include<iostream>

int main()
{
	int n,m, val = 0;
	std::cin >> n >> m ;
	if(n<=m)
	{
		val = n;
		while(val<=m)
		{
			std::cout << val << std::endl;
			val++;
		}
	}else
	{
		val = m;
		while(val <= n)
		{
			std::cout << val << std::endl;
			val++;
		}
	}
	return 0;
}
