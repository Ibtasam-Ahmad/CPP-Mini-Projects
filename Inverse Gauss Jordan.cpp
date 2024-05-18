#include<iostream>
using namespace std;
int main()
{
	int n;  //size of system
	double a[50][50] = { 0 }, ratio = 0.0;
	cout << "Enter no. of equations:\n";
	cin >> n;
	cout << "\nenter the elements of the augmented matrix row_wise\n";    //matrix [a/b]
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * n; j++)
		{
			cout << "\na" << i << j << " = ";
			cin >> a[i][j];
		}
	}
	//display matrix
	cout << "\n matrix:-\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * n; j++)
		{
			cout << a[i][j] << "   ";
		}
		cout << endl;
	}
	//Inverse calculation
	for (int j = 1; j <= n; j++)
		for (int i = 1; i <= n; i++)
		{
			if (i != j)
			{
				ratio = (a[i][j] / a[j][j]);

				for (int k = 1; k <= 2 * n; k++)
				{
					a[i][k] -= (ratio * a[j][k]);
				}
			}
		}
	//covert into inverse matrix
	for (int i = 1; i <= n; i++)
	{
		ratio = a[i][i];
		for (int k = 1; k <= 2 * n; k++)
		{
			a[i][k] = a[i][k] / ratio;
		}
	}
	// display [I | A-1]
	cout << "\n Output\n";
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= 2 * n; k++)
		{
			cout << a[i][k] << "     ";
		}
		cout << endl;
	}
	// display inverse
	cout << "\nInverse matrix\n";
	for (int i = 1; i <= n; i++)
	{
		for (int k = n + 1; k <= 2 * n; k++)
		{
			cout << a[i][k] << "     ";
		}
		cout << endl;
	}
}