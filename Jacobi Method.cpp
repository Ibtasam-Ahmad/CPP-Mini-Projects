//JACOBI
//iterations
#include <iostream>
#include<cmath>
using namespace std;
main()
{
	int m = 0, counter = 10;
	int n;
	double a[50][50], b[50], x[50], I[50];
	cout << "Enter number of equations .\n";
	cin >> n;
	cout << "Matrix A:" << endl;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cout << "a[" << i << "," << j << "] = ";
			cin >> a[i][j];
		}
	cout << "Enter Matrix b:" << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << "b[" << i << "] = ";
		cin >> b[i];
	}
	cout << "\nSet initial guess:-\n";
	for (int i = 1; i <= n; i++)
	{
		cout << "x:[" << i << "]=";
		cin >> I[i];
	}
	while (m < counter)
	{
		cout << endl;
		for (int i = 1; i <= n; i++)
		{
			cout << "\tx" << i  << " = " << I[i] << "\t";
			x[i] = (b[i] / a[i][i]);
			for (int j = 1; j <= n; j++)
			{
				if (j == i)
					continue;
				x[i] = x[i] - ((a[i][j] / a[i][i]) * I[j]);      //computing roots
			}
		}
		for (int i = 1; i <= n; i++)
			I[i] = x[i];  // update the initial guess
		m++;
	}
}
