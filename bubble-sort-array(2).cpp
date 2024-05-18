#include<iostream>
using namespace std;
main()
{
	int x[5] = {1,2,3,4,5};
	int i, j, arraysize=5 ;
	for( j=1; j<arraysize; j++)
	{
		for( i=0; i<arraysize-j; i++)
		{
			if( x[i] < x[i+1])
			{
				int tep = x[i];
				x[i] = x[i+1];
				x[i+1] = tep;
			}
		}
	}
	for( i=0; i<arraysize; i++)
	{
		cout<<x[i];
	}
}
