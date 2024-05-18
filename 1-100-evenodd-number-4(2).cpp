/* print 1 to 100 even  and odd numbers */
#include<iostream>
using namespace std;
main()
{
	int x;
A:	if(x<=100)
	{
    	cout<<"numbers are even"<<endl;
	}
	    x=2;
    	if(x%2==0)
    {
    	   cout<<x<<endl;
    	   x=x+2;
    	   goto A;
	}
	    
	    else 
	    cout<<x<<endl;
	    x=x+2;
	    goto A;
    
}
