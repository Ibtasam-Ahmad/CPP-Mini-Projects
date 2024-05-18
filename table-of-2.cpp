//table 
#include<iostream>
using namespace std;
main()
{
	int x,y=0;
	cout<<"enter the number ";
	cin>>x;
	cout<<"tabele of "<<x<<" is\n";
	do
	{
		y=y+x;
		cout<<y<<endl;
	}
	while(y<x*10);
}
