//program using for loop to prnt pyramid
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int i,x=1,y=20;
	for(i=1;i<=10;i=i+1)
	{
		cout<<setw(y-i)<<endl;
		cout<<" *";
	}
}
