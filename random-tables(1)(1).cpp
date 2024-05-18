//find the table
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int x,a,b,y=0,z;
	cout<<"enter the first number ";
	cin>>x;
	cout<<"enter the second number ";
	cin>>a;
	
	for(b=x;b<=a;b=b+1)
	{
		cout<<"table of "<<b<<" is \n";
		for(y=0;y<x*10;x=x+1)
		{
			y=y+x;
			cout<<y<<endl;
		}
		
	}
}
/*int num, i, j, res;
    cout<<"-----------Table from 1 to 10--------\n\n";
    for(i=1; i<=10; i++)
    {
        num = i;
        cout<<"Table of "<<num<<": ";
        for(j=1; j<=10; j++)
        {
            res = num*j;
            cout<<res<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;*/
