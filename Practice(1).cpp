#include<iostream>
#include<conio.h>
using namespace std;
 main() 
{
   float a[10][10], b[10], x[10], I[10];
   int n, k=0;
   cin>>n;
   for(int i=1; i<=n; i++)
   {
   		for(int j=1; j<=n; j++)
   		{
   			cout<<i<<j<<"\t";
   			cin>>a[i][j];
		}
   }
   for(int i=1; i<=n; i++)
   {
   	cout<<i<<"\t";
   		cin>>b[i];
   }
   for(int i=1; i<=n ; i++)
   {
   	cout<<i<<"\t";
   		cin>>I[i];
   }
   while(k<10)
   {
   	cout<<endl;
   		for(int i=1; i<=n; i++)
   		{
   			cout<<"x"<<i<<" = "<<I[i];
   			x[i] = b[i] / a[i][i];
   			for(int j=1; j<=n; j++)
   			{
   				if(i==j)
   				{
	  				continue;
   					x[i] -= ((a[i][j] / a[i][i]) * I[j]);
				}
			}
		}
		for(int i=1; i<=n; i++)
		{
			I[i]=x[i];
		}
		k++;
		/*cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << "\tx" << i + 1 << " = " << I[i] << "\t";
			x[i] = (b[i] / a[i][i]);
			for (int j = 0; j < n; j++)
			{
				if (j == i)
					continue;
				x[i] = x[i] - ((a[i][j] / a[i][i]) * I[j]);      //computing roots
			}
		}
		for (int i = 0; i < n; i++)
			I[i] = x[i];  // update the initial guess
		m++;
	}*/
   }
}
