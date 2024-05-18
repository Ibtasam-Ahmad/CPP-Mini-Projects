// linnear search
#include<iostream>
using namespace std;
main()
{
	int a[10] = { 1,3,4,2,6,5,7,9,11,10 };
	int i, n, size = 10, found = 0;
	cout << "Enter a number to serach ";
	cin >> n;
	for( i = 0; i < size; i++)
	{
		if(n == a[i])
		{
			found = 1;
			break;
		}
	}
	if( found )
	{
		cout << n <<" on index " <<i+1 << " found\n ";
	}
	else
	{
		cout << n << " not found\n ";
	}
}
