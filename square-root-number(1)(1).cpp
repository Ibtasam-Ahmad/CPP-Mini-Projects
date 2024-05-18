#include<iostream>
using namespace std;
main()
{
	int i, j, k=0;
	cout << "Enter to number to find square root\n";
	cin >> i;
	for( j=1; j<=i; j++ )
	{
		if( j * j == i )
		{
			k=1;
			break;
		}
	}
	if( k == 1 )
	{
		cout << "the square root of " << i <<" is " << j;
	}
	else
	{
		cout << "the number " << i << " is not a square root number";
	}
}
