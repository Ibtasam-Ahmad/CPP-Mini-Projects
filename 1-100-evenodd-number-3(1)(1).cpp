/* print 1 to 100 even  and odd numbers */
#include<iostream>
using namespace std;
main()
{
	int x=1;
A:	if(x<=100)
	{
		if(x%2==0)
		{
			cout<<x<<" number is even"<<endl;
			x=x+1;
			goto A;
			
		}
		else
		{
			cout<<x<<" number is odd"<<endl;
			x=x+1;
			goto A;
		}
	}
}
