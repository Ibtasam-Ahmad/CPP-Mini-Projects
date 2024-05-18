#include<iostream>
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
	//GJ method
	// loop for generation of upper and lower triangular matrix
	for (int j = 1; j <= n; j++)
		for (int i = 1; i <= n; i++)
		{
			if (i != j)
			{
				//if (a[i][j] != 0)
				ratio = (a[i][j] / a[j][j]);
				for (int k = 1; k <= n + 1; k++)
				{
					a[i][k] -= (ratio * a[j][k]);
				}

			}

		}
	//identity matrix
	for (int i = 1; i <= n; i++)
	{
		ratio = a[i][i];
		for (int k = 1; k <= n + 1; k++)
		{
			a[i][k] = a[i][k] / ratio;
		}
	}
	// display upper and lower triangular matrix
	cout << "\n\nUpper and lower triangular matrix.\n\n";
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n + 1; k++)
		{
			cout << a[i][k] << "  ";
		}
		cout << endl;
	}

	cout << "\nThe solution is ";
	for (int q = 1; q <= n; q++)
	{
		x[q] = a[q][n + 1] / a[q][q];
		cout << "\nX" << q << "\t" << x[q];
	}

	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//Determinant
	double det = 1.0;
	for (int i = 1; i <= n; i++)
	{
		det *= a[i][i];
	}
	cout << "\nDeterminant of matrix = " << det << endl;

}