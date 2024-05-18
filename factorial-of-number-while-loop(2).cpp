//factorial of number using while loop
#include<iostream>
using namespace std;
main()
{
	int x,y=1,product=1;
	cout<<" enter the number ";
	cin>>x;
	while(y<=x)
	{
		product=y*product;
		y=y+1;
	}
	cout<<product;
}
