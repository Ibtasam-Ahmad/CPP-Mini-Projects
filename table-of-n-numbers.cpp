//table of numbers
#include<iostream>
using namespace std;
main()
{
	int x,n,y,z,a,b,c;
	cout<<"enter the first number ";
	cin>>n;
	cout<<"enter the second number ";
	cin>>b;
	for(y=n;y<=b ;y++)
	{
		cout<<"the table of "<< y <<" is "<<endl;
		for(x=1;x<=10;x++)
		{
			cout<<x*y<<" ";
		}
		cout<<endl;
	}
}
