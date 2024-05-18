#include <iostream>
using namespace std;

int main()
{
	int n;  //size of system
	double a[50][50] = { 0 }, x[50], sum, ratio = 0.0;
	cout << "Enter no. of equations:\n";
	cin >> n;
	cout << "\nenter the elements of the augmented matrix row_wise\n";    //matrix [a/b]
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n + 1; j++)
		{
			cout << "\na" << i << j << " = ";
			cin >> a[i][j];
		}
	}
	//GE method
	// loop for generation of upper triangular matrix
	for (int j = 1; j <= n - 1; j++)
		for (int i = 1; i <= n; i++)
		{
			if (i > j)
			{
				//if (a[i][j] != 0)
				ratio = (a[i][j] / a[j][j]);
				for (int k = 1; k <= n + 1; k++)
				{
					a[i][k] -= (ratio * a[j][k]);
				}

			}
		}

	// display upper triangular matrix
	cout << "\n\nUpper triangular matrix.\n\n";
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n + 1; k++)
		{
			cout << a[i][k] << "  ";
		}
		cout << endl;
	}

	x[n] = a[n][n + 1] / a[n][n];
	for (int i = n - 1; i >= 1; i--)
	{
		sum = 0;
		for (int j = i + 1; j <= n; j++)
		{
			sum = sum + a[i][j] * x[j];
		}
		x[i] = (a[i][n + 1] - sum) / a[i][i];
	}
	cout << "\nThe solution is ";
	for (int q = 1; q <= n; q++)
		cout << "\nX" << q << "\t" << x[q];

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//Determinant
	int det = 1.0;
	for (int i = 1; i <= n; i++)
	{
		det *= a[i][i];
	}
	cout << endl << endl;
	cout << "Determinant of matrix = " << det << endl;
}