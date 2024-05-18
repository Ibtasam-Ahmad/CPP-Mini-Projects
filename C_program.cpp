#include<iostream>
using namespace std;
int main()
{
	int x[5]= {1, 2, 3, 4, 5};
	int n[5];
	for(int i=0; i<5; i++)
	{
		if (i==0)
		{
			n[i]=x[i+1]*x[i];
			cout<<n[i]<<endl;
		}
		else if(i==4)
		{
			n[i]=x[i-1]*x[i];
			cout<<n[i]<<endl;
		}
		else
		{
			n[i] = x[i] * x[i-1] * x[i+1];
			cout<<n[i]<<endl;
		}
	}
	
	for (int i=0; i<5; i++)
	{
		cout<<n[i];
	}
	
}
