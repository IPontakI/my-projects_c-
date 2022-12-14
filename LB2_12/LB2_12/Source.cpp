#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int N = 10;
	int arr[N][N];
	int n;
	bool livomin = false, pravomin = false, livomax = false, pravomax = false;
	int minzn, maxzn;

	cout << "" << endl;

	cout << "Generate the matrix : \n";
	cout << "Enter the number of rows and columns: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 6;
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		minzn = arr[i][0];
		maxzn = arr[i][0];

		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < minzn)
			{
				minzn = arr[i][j];
			}
			if (arr[i][j] > maxzn)
			{
				maxzn = arr[i][j];
			}
		}

		cout << "min = " << minzn << " max = " << maxzn << ") ";

		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == minzn && j < i)
			{
				livomin = true;
				continue;
			}
			if (arr[i][j] == minzn && j > i && !livomin)
			{
				pravomin = true;
				continue;
			}
			if (arr[i][j] == maxzn && j < i)
			{
				livomax == true;
				continue;
			}
			if (arr[i][j] == maxzn && j > i && !livomax)
			{
				pravomax = true;
				continue;
			}
		}
		if (livomin && pravomax /*|| livomax && pravomin*/)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				cout << arr[i][j] << " ";
			}
		}
		else if (livomax && pravomin)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				cout << arr[i][j] << " ";
			}
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				cout << arr[i][j] << " ";
			}
		}
		livomin = false, pravomin = false, livomax = false, pravomax = false;
		cout << "\n";
	}
}
