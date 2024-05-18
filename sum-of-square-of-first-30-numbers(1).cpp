//the sum  of square of first 30 numbers
#include<iostream>
using namespace std;
main()
{
	int x, sum=0;
	for(x=1;x<=30;x=x+1)
	{
		
		sum=sum+x*x;
	}
	cout<<"the sum of square of number are "<<sum;
} 
