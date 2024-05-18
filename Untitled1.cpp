#include<iostream>
using namespace std;
main()
{
	int a[10] = { 1,3,4,2,6,5,7,9,11,10 };
	int i, n, size = 10; //found = 0;
	bool found=false;
	cout << " Enter a number to serach \n";
	cin>>n;
	for( i=0; i<size; i++)
	{
		if(a[i]=n)
		{
			found = true;
			break;
		}
	}
	if( true )
	{
		cout << n << " found\n ";
	}
	else
	{
		cout << n << " not found\n ";
	}
}
