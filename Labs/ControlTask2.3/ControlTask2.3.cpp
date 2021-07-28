// ControlTask2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Enter quantity\n";
	int quantity;
	int counter = 0;
	std::cin >> quantity;
	while (quantity >= 10)
	{
		quantity -= 10;
		counter++;
		if (quantity < 10)
		{
			while (quantity >= 5)
			{
				quantity -= 5;
				counter++;
				if (quantity < 5)
				{
					while (quantity >= 2)
					{
						quantity -= 2;
						counter++;
						if (quantity < 2)
						{
							while (quantity == 1)
							{
								quantity -= 1;
								counter++;

							}
						}
					}
				}
			}
			while (quantity >= 2)
			{
				quantity -= 2;
				counter++;
				if (quantity < 2)
				{
					while (quantity == 1)
					{
						quantity -= 1;
						counter++;

					}
				}
			}
			while (quantity == 1)
			{
				quantity -= 1;
				counter++;

			}
		}
	}
	while (quantity >= 5)
	{
		quantity -= 5;
		counter++;
		if (quantity < 5)
		{
			while (quantity >= 2)
			{
				quantity -= 2;
				counter++;
				if (quantity < 2)
				{
					while (quantity == 1)
					{
						quantity -= 1;
						counter++;

					}
				}
			}
		}
	}
	while (quantity >= 2)
	{
		quantity -= 2;
		counter++;
		if (quantity < 2)
		{
			while (quantity == 1)
			{
				quantity -= 1;
				counter++;

			}
		}
	}
	while (quantity == 1)
	{
		quantity -= 1;
		counter++;

	}
	std::cout << "number of coins: " << counter;




}
