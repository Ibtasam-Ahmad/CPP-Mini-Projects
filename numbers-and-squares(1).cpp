/* print out loop the numbers from 1 to 100
their square using while loop */
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
		cout<<" the number is "<<x<<"  the square of number is "<<x*x<<endl;
		x=x+1;
	}
}
