/* print 1 to 100 even  and odd numbers */
#include<iostream>
using namespace std;
main()
{
	int x;
	for(x=1;x<=100;x=x+1)
	if(x%2==0)
	{
		cout<<x;
		cout<<"  number is even"<<endl;
	}
	else
	{
		cout<<x;
		cout<<"  number is odd"<<endl;
	}
}
