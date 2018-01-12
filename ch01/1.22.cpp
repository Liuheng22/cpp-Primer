#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item curritem,item;
	if(std::cin >> curritem)
	{
		while(std::cin >> item)
		{
			curritem += item;
		}
			std::cout << curritem << std::endl;
	}
	return 0;
} 
