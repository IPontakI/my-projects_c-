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

	const int MAXN = 100;
	int n;
	int i, j;
	int tmp;
	float arr[MAXN];

	cout << "Enter the number of array elements: ";
	cin >> n;

	cout << "Initial array: " << endl;
	for (i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "  ";
	}cout << endl << endl;

	for (i = 0; i <= n-1; i++)
	{
		tmp = arr[i];
		for (j = i-1; (j >= 0) && (tmp < arr[j]); j--)
		
			arr[j + 1] = arr[j];
		arr[j + 1] = tmp;
	}

	cout << "Array output in ascending order: \n" ;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}cout << endl << endl;

	cout << "Array output in descending order: \n";
	for (i = n-1; i >=0; i--)
	{
		cout << arr[i] << "  ";
	}cout << endl;
}