#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <ctime>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int MAXN = 100, MAXM = 100;
	int n, m;
	int tmp;
	float arr[MAXN][MAXM];

	cout << "Enter the number of array elements (n): ";
	cin >> n;
	cout << "Enter the number of array elements (m): ";
	cin >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 1000;
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";

	//Sorting 1

	for (int i = 0; i <= n - 1; i++)
	{
		for (int k = 0; k <= m - 1; k++)
		{
			for (int j = 0; j <= m - 2; j++)
			{
				if (arr[i][j] >= arr[i][j + 1])
				{
					tmp = arr[i][j + 1];
					arr[i][j + 1] = arr[i][j];
					arr[i][j] = tmp;
				}
			}
		}
	}

	cout << "Sorted array in ascending order\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n";

	//Sorting 2

	for (int i = 0; i <= n - 1; i++)
	{
		for (int k = 0; k <= m - 1; k++)
		{
			for (int j = 0; j <= m - 2; j++)
			{
				if (arr[i][j] <= arr[i][j + 1])
				{
					tmp = arr[i][j + 1];
					arr[i][j + 1] = arr[i][j];
					arr[i][j] = tmp;
				}
			}
		}
	}

	cout << "Sorted array in descending order\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n";
}
