#include<iostream>
using namespace std;
main()
{
	int x[1000],o,e,i,j=1;
	for(i=0;i<1000;i++)
	{
		x[i]=j;
		j++;
	}
	for(i=0;i<1000;i++)
	{
	    if(x[i]%2==0)
	    {
	    	x[e]=x[i];
		    cout<<x[e];
		    e++;
	    }
	    else
    	{
		    x[o]=x[i];
	    	cout<<x[o];
 	    	o++;
    	}
    }   
}
