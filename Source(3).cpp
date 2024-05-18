#include <iostream>
using namespace std;
 main()
{
	float a[100][100];
	int n;
	float ratio;
	cout<<"Enter the order of the system \n";
	cin>>n;
	cout<<"Enter the augmented matrix A/B \n";
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n+1;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
		//GE Method
		for(int j=1;j<=n-1;j++)
		{
			for(int i=1;i<=n;i++)
			{
				if(i!=j)
				{
				ratio=a[i][j]/a[j][j];
				for(int k=1;k<=n+1;k++)
					a[i][k]=a[i][k]-ratio*a[j][k];
				}
			}
		}
		
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}	
}

//Gauss Jordan Method C++ code

//#include<iostream>
//#include<iomanip>
//#include<cmath>
//#define N 3
//	using namespace std;
//
//int main()
//{
//	float Matrix[N][N+1],x[N];
//		// Matrix = Augumented Matrix [Ad]
//	float temp;
//	//variables for loops
//	int i,j,k;
//	//Scan values of Matrix.
//	cout<<"Enter Elements of "<<N<<" Rows & "<<N+1<<" Columns\n";
//	for(i=0; i<N; i++)
//	{
//		cout<<"\tEnter Row  "<<i+1<<" & Press Enter\n";
//		for(j=0; j<N+1; j++)
//		cin>>Matrix[i][j];
//	}
//	 //make above matrix Identity or Diagonal Matrix
//	cout<<fixed;
//	for(j=0; j<N; j++)
//		for(i=0; i<N; i++)
//		if(i!=j)
//		{
//			temp=Matrix[i][j]/Matrix[j][j];
//			for(k=0; k<N+1; k++)
//				Matrix[i][k]-=Matrix[j][k]*temp;
//		}
//		//print the Diagonal matrix
//	cout<<"\n ---------------------------------\n";
//	cout<<"\n Diagonal  Matrix is:\n";
//	for(i=0; i<N; i++)
//	{
//		for(j=0; j<N+1; j++)
//		cout<<setw(8)<<setprecision(4)<<Matrix[i][j];
//		cout<<endl;
//	}	
//	cout<<"\n ---------------------------------\n";
//	//print values of x,y,z
//	cout<<"\n The Solution is:\n";
//	for(i=0; i<N; i++)
//	 cout<<"x["<<setw(3)<<i+1<<"]="<<setw(7)<<setprecision(4)<<Matrix[i][N]/Matrix[i][i]<<endl;
//return 0;
//}
