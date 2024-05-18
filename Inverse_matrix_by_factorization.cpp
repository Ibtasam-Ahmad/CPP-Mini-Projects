//Gauss Siedal method

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double a[50][50], b[50], x[50], I[50], e = 1e-10, k = 0.0;
	cout << "Enter number of equations .\n";
	cin >> n;
	cout << "Matrix A:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "," << j << "] = ";
			cin >> a[i][j];
		}
	cout << "Enter Matrix b:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "b[" << i << "] = ";
		cin >> b[i];
	}
	cout << "\nSet initial guess:-\n";
	for (int i = 0; i < n; i++)
	{
		cout << "x:[" << i << "]=";
		cin >> I[i];
	}
	while(k<e)// yahann while lgya ha
	{ 
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "\tx" << i + 1 << " = " << I[i] << "\t";
			x[i] = (b[i] / a[i][i]);
			for (int j = 0; j < n; j++)
			{
				if (j == i)
				continue;
				x[i] = x[i] - ((a[i][j] / a[i][i]) * I[j]);      //computing roots
				k = abs(x[i] - I[i]);
				I[i] = x[i];   // updating initial guess				
			}// Ya neechy wala add kia h
			cout << "x" << i + 1 << "=" << x[i] << "\t";
		}
		cout << "\n";
		k--;
	}	
	return 0;
}
