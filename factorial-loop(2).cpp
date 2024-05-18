//Write a code using while loop to print the factorial of first 50 odd numbers
#include<iostream>
using namespace std;
main()
{
	int i, j=1, k=1 ;
	for ( i=0; i<100; i++)
	{
//		int x = 2;
//		if( x%2 == 0)
		{
			while(j<=i+1)
          	{
        		k = j * k;
        		j++ ;
        	}
        	cout << "the factorial of " << i+1 << " is " << k;
        	cout<<endl;
		}
	} // this program is outside the range of int
}
