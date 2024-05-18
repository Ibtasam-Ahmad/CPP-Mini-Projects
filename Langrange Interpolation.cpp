//Langrange Interplotation

#include<iostream>
using namespace std;
int main()
{
	double x[100], f[100];
	double sum = 0, p, xx;
	int n;
	cout << "Enter number of data point\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter x" << i << " = ";
		cin >> x[i];
		cout << "Enter f[x" << i << "] = ";
		cin >> f[i];
	}
	cout << "Enter the point for interpolation = ";
	cin >> xx;
	//apply algorithm
	for (int i = 0; i < n; i++)
	{
		p = 1;
		for (int j = 0; j < n; j++)
		{
			if (j != i)
				p = p * (xx - x[j]) / (x[i] - x[j]);
		}
		sum = sum + p * f[i];
	}
	cout << "The interpolated output at x = " << xx << " is f[x] = " << sum;
	return 0;
}