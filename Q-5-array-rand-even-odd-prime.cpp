/*Write code to Store 10000 random number in an array and then find out even, odd and
prime number from the array*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int k[1000];
	int p=1,n;
	srand(time(NULL));
	for(int n=0; n<1000; n++)
	{
		k[n]=rand();
	}
//	for(int n=0; n<1000; n++)
	{
//		if(k[n]%2==0)
		{
//			cout<<k[n]<<" even \n";
		}
//		else
		{
//			cout<<k[n]<<" odd \n";
		}
	}  
	for( n=0; n<1000; n++)
	{
	    for(int x=2; x<1003; x++)
	    {
		    if(k[n]>1)     //if the value of random no greter than 1 continues
		    {
			    if(k[n]%x==0)     //if the random number divides
			    {
				    if(k[n]%2==0)
				    {
				    	cout<<k[n]<<" non prime even\n";
					}
					else
					{
						cout<<k[n]<<" non prime odd\n";
					}
//					cout<<k[n];
					p=0;
					x=1003;
			    }
		    }
       	}
       	if(k[n]>1)
       	{
        	if(p==1)
        	{
    	    	if(k[n]%2==0)
    		    {
    	     		cout<<k[n]<<" prime even\n";
	    		}
	    		else
	    		{
	    			cout<<k[n]<<" prime odd\n";
		    	}
    	    }
        	p=1;
        }
    }
}
