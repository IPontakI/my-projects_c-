#include<iostream>
#include<ctime>

using namespace std;

void main()
{	
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int kilkist = 100;
	int arr[kilkist];
	int n, sum;


	cout << "\t\t\tCalculation of deposits in dollars in the bank" << endl;

	cout << "Enter the amount of deposits: ";
	cin >> n;
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		cout << "Deposit ¹ " << i + 1 << " =\t" << arr[i] << "$\n";
	}

	cout << "\t\t\tWe calculate deposits in hryvnias (at the rate of 27 hryvnias for $1)" << endl;

	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] * 27;
		cout << "Deposit ¹ " << i + 1 << " in grn. =\t" << arr[i] << "\tgrn." << "\n";
	}

	sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "\nThe sum of all deposits in hryvnias =\t\t" << sum << "\tgrn.";

	int naibolshoe = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > naibolshoe)
		{
			naibolshoe = arr[i];
		}
	}

	cout << "\nThe largest deposit amount in hryvnias =\t" << naibolshoe << "\tgrn." << endl;
}


