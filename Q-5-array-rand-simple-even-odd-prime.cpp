/*Write code to Store 10000 random number in an array and then find out even, odd and
prime number from the array*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int k[1000];
	int p=1;
	srand(time(NULL));
	for( int i=0; i<1000; i++)
	{
		k[i]=rand();
	}
	for( int i=0; i<1000; i++)
	{
		if(k[i]%2==0)
		{
			cout<<k[i]<<" even\n";
		}
		else
		{
			cout<<k[i]<<" odd\n";
		}
	} 
	for( int i=0; i<1000; i++)
	{
		for( int j=2; j<1003; j++)
        {
	    	if(k[i]>1)
		    {
		    	if(k[i]%j==0)
		    	{
		    		cout<<k[i]<<" non prime\n";
			    	p=0;
				    j=1003;
		    	}
		    }
    	}
    	if(k[i]>1)
    	{
    	    if(p==1)
    	    {
	        	cout<<k[i]<<" prime\n";
	        }
	        p=1;
	    }
	}	
}
