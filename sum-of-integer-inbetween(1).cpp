/* read integers and find
numbers sum inbetween */
#include<iostream>
using namespace std;
main()
{
	int i,j,sum=0;
	cout<<" enter i  ";
	cin>>i;
	cout<<" enter j  ";
	cin>>j;
	while(i<j-1)
	{
		cout<<" the number in-between are "<<i+1<<endl;
		sum=sum+1+i;
		i=i+1;
	}
	cout<<"the sum is "<<sum;
}
