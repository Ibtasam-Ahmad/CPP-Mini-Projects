/* even numbers and their square */
#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"enter the value of x : ";
	cin>>x;
	cout<<"enter the value of y : ";
	cin>>y;
	while(x<=y)
	{
		if(x%2==0)
		{
		   cout<<"the even number is "<<x<<"  the square of even number is "<<x*x<<endl;
	    }
	    x=x+1;
	}
}
