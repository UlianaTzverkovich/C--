// ControlTask5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int SUM(int n, int* massive);
int sumNega(int n, int* massive);
int sumPosi(int n, int* massive);
int sumOdd(int n, int* massive);
int sumEven(int n, int* massive);
int MAX(int n, int* massive);

int main()
{
	const int n = 7;
	int massive[n];
	int s = 0;

	for (int i = 0; i < n; i++)
	{
		std::cout << "MAS[" << i << "]=";
		std::cin >> massive[i];
	}
	std::cout << "SUM = " << SUM(n, massive);
}

int SUM(int n, int* massive)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += massive[i];
	}
	return s;
}

int sumNega(int n, int* massive)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (massive[i] < 0)
		{
			s += massive[i];
		}
	}
	return s;
}

int sumPosi(int n, int* massive)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (massive[i] > 0)
		{
			s += massive[i];
		}
	}
	return s;
}

int sumOdd(int n, int* massive)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			s += massive[i];
		}
	}
	return s;
}

int sumEven(int n, int* massive)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			s += massive[i];
		}
	}
	return s;
}

int MAX(int n, int* massive)
{
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (massive[i - 1] < massive[i])
		{
			index = i;
		}
	}
	return index;
}

int MIN(int n, int* massive)
{
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (massive[i - 1] > massive[i])
		{
			index = i;
		}
	}
	return index;
}


int pickingIndex(int n, int* massive)
{
	int indexMax = MAX(n, massive);
	int indexMin = MIN(n, massive);

	if (indexMax == indexMin + 1 || indexMax + 1 == indexMin)
	{
		int multy = massive[indexMin] * massive[indexMax];
		return multy;
	}
	if (indexMin < indexMax)
	{
		int multy = massive[indexMin];
		for (int i = indexMin + 1; i < indexMax; i++)
		{
			multy *= massive[i];
		}
		return multy;
	}
	else
	{
		int multy = massive[indexMin];
		for (int i = indexMax + 1; i < indexMin; i++)
		{
			multy *= massive[i];
		}
		return multy;
	}
}




