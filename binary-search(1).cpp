//Binary search
#include<iostream>
using namespace std;
main()
{
	int x[5]={1,2,3,4,5};
	int first_index=0,size=5,last_index=size-1,mid_index;
	int n;
	cout<<"Enter a Number to Search:";
	cin>>n;
	if(n<x[first_index]||n>x[last_index])
	{
		cout<<n<<" not found";
	}
	else
	{
		while(first_index<=last_index)
		{
			mid_index=(first_index+last_index)/2;
			if(n==x[mid_index])
			{
				cout<<n<<" found";
				break;
			}
			if(n<=x[mid_index])
			{
				last_index=mid_index;
			}
			else
			{
				first_index=mid_index+1;
			}
		}
	}
}
