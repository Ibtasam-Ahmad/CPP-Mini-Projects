//program to store integers 1 to 1000 in array
//array to find out numbers even and odd 
#include<iostream>
using namespace std;
main()
{
	int x[1000],i=0,j=1;
	for(i;i<1000;i++)
	{
		x[i]=j;
		j++;
	}
	for(i=0;i<1000;i++)
	{
	  if(x[i]%2==0)
    	{
		cout<<x[i]<<" is even "<<endl;
	    }
	    else
	    {
	   	cout<<x[i]<<" is odd "<<endl;
	    }
    }
}
