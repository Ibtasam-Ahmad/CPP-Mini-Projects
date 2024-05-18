//Cholesky Method
#include<iostream>
#include<cmath>
using namespace std;
int n;
int main()
{
	double a[50][50] = { 0.0 }, b[50][1] = { 0.0 }, l[50][50] = { 0.0 };
	double u[50][50] = { 0.0 }, pro[50][50] = { 0.0 }, x[50] = { 0.0 }, y[50] = { 0.0 };

	cout << "Enter the size of matrix: ";
	cin >> n;
	// matrix A
	cout << "\nMatrix A:-\n";

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cout << "\na" << i << j << "  ";
			cin >> a[i][j];
		}
	// matrix B
	cout << "\nMatrix b:-\n";
	for (int i = 1; i <= n; i++)
	{
		cout << "\nb" << i << "1  ";
		cin >> b[i][1];
	}
	//CHOLESKY mathod
	for (int i = 1; i <= n; i++)
	{
		l[i][i] = 1.0;
	}
	for (int i = 1; i <= n; i++)
	{
		//Upper triangular matrix	
		for (int j = 1; j <= n; j++)
		{
			if (i <= j)
			{
				pro[i][j] = { 0.0 };
				for (int k = 1; k <= i; k++)
				{
					pro[i][j] += (l[i][k] * u[k][j]);
				}
				u[i][j] = (a[i][j] - pro[i][j]);
			}
			//Lower triangular matrix
			if (i > j)
			{

				pro[i][j] = { 0.0 };
				for (int k = 1; k <= i; k++)
				{
					pro[i][j] += (l[i][k] * u[k][j]);
				}

				l[i][j] = (a[i][j] - pro[i][j]) / u[j][j];
			}
		}
	}
	//Display 9 equation of cholesky method
	cout << "\nDisplay " << n * n << " equations by cholesky method!\n";
	for (int q = 1; q <= n; q++)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << "l" << i << "1 * u1" << i << " + l" << i << "2 * u2" << i;
			cout << " + l" << i << "3 * u3" << i << " == " << a[q][i] << endl;
		}
		cout << endl;
	}
	//display upper and lower triangular
	cout << "\nLower triangular!\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << l[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "\nUpper triangular!\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << u[i][j] << "  ";
		}
		cout << endl;
	}
	//SOLUTION SETS
	//ly=b
	double sum;
	for (int i = 1; i <= n; i++)
	{
		sum = 0.0;
		for (int j = 1; j <= i; j++)
		{
			sum += l[i][j] * y[j];
		}
		y[i] = (b[i][1] - sum);
	}
	cout << "\n\nHere\n ";
	for (int q = 1; q <= n; q++)
		cout << "\ny" << q << "\t" << y[q];

	//ux=y
	x[n] = y[n] / u[n][n];
	for (int i = n - 1; i >= 1; i--)
	{
		sum = 0.0;
		for (int j = i + 1; j <= n; j++)
		{
			sum += u[i][j] * x[j];
		}
		x[i] = (y[i] - sum) / u[i][i];
	}
	cout << "\nThe solution is ";
	for (int q = 1; q <= n; q++)
		cout << "\nx" << q << "\t" << x[q];
}