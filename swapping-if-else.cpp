/*write a program that get two mumbers,
 printtheir value and then interchange their values,
 print the intecahnge value*/
#include<iostream>
using namespace  std;
main()
{
	float x,y;
	cout<<"enter the value of x ";
	cin>>x;
	cout<<"enter the value of y ";
	cin>>y;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"after swaping\n";
	if(x==y)
	{
		cout<<"x="<<x<<endl;
	    cout<<"y="<<y<<endl;
	}
	else
	{
    	cout<<"y="<<x<<endl;
	    cout<<"x="<<y<<endl;
	}
}
