#include<iostream>
 #include <iomanip>
using namespace std;
main()
{
	cout<<"sum of diagonal of square matrx\n\n\n";
	int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row=3, col=3, sum=0, sum1=0, index1=0, index2=2, total=3;
	for(int i=0; i<col; i++)
	{
		for(int j=0; j<row; j++)
		{
			if(i==j)
			{
				sum=sum+A[i][j];
			}
		}
	}cout<<sum<<"\n\n\n";
	
	int B[3][3]={{1,3,5},{2,4,7},{9,3,2}};
	for(int i=0; i<col; i++)
	{

		for(int j=0; j<row; j++)
		{

			if((i + j) == total-1)
			{
				sum1=sum1+B[i][j];
				index1++;
				index2--;
			}
		}
	}cout<<sum1;
	
	
	
//	int row=2, col1=2, col2=3, sum=0;
//	int A[2][2]={{1,2},{3,4}};
//	int B[2][3]={{2,3,4},{6,7,9}};
//	for(int i=0; i<row; i++)
//	{
//		for(int j=0; j<col2; j++)
//		{
//			for(int k=0 ;k<col1; k++)
//			{
//				sum = sum + A[i][k]*B[k][j];
//			}
//			cout<<sum<<"\t";
//			sum=0;
//		}
//		cout<<endl;
//	}
	
	
//	int ROW=2, COL=3;
////	cout<<"enetr number of rows";
////	cin>>ROW;
////	cout<<"enetr number of colums";
////	cout<<COL;
//
//	double A[ROW][COL];
//	for(int i=0;i<ROW;i++)
//	{
//		cout<<"enter the "<<i<<" row\n";
//	 	for(int j=0;j<COL;j++)
//	 	{
//	  	 	 cout<<"Enter the "<<i<<" row of "<<j<<" of column\t";
//			cin>>A[i][j];
//		 }
//		 cout<<endl;
//	}
//	
//	cout<<"the matrix you entered is\n";
//	for(int i=0;i<ROW;i++)
//	{
//		cout<<"\n\n\t";
//	 	for(int j=0;j<COL;j++)
//		 {
//	    
//			cout<<A[i][j]<<"\t";
//		 }
//		 cout<<"\n\n";
//	}
//	
//	cout<<"the transpose of matrix you entered is\n";
//	for(int x=0;x<COL;x++)
//	{
//		cout<<"\n\n\t";
//	 	for(int y=0;y<ROW;y++)
//		 {
//	    
//			cout<<A[y][x]<<"\t";
//		 }
//		 cout<<"\n\n";
//	}
//	
//	cout<<"the clock-wise ROTATION of matrix you entered is\n";
//	for(int a=0;a<COL;a++)
//	{
//		cout<<"\n\n\t";
//	 	for(int b=ROW-1;b>=0;b--)
//		 {
//	    
//			cout<<A[b][a]<<"\t";
//		 }
//		 cout<<"\n\n";
//	}
//	
//	cout<<"the anti-clock-wise ROTATION of matrix you entered is\n";
//	for(int a=COL-1;a>=0;a--)
//	{
//		cout<<"\n\n\t";
//	 	for(int b=0;b<ROW;b++)
//		 {
//	    
//			cout<<A[b][a]<<"\t";
//		 }
//		 cout<<"\n\n";
//	}
//	
//	cout<<"the 180 DEGREE ROTATION of matrix you entered is\n";
//	for(int a=ROW-1;a>=0;a--)
//	{
//		cout<<"\n\n\t";
//	 	for(int b=COL-1;b>=0;b--)
//		 {
//	    
//			cout<<A[a][b]<<"\t";
//		 }
//		 cout<<"\n\n";
//	}	
	

//	// This program demonstrates a two-dimensional array.
//
//  int NUM_DIVS ; // Number of divisions
//  cout<<"enter the number of divisions";
// cin>>NUM_DIVS;
//  int NUM_QTRS ; // Number of quarters
//  cout<<"enter the number of quaters";
// cin>>NUM_QTRS;
// double sales[NUM_DIVS][NUM_QTRS]; // Array with 3 rows and 4 columns.
// double totalSales = 0; // To hold the total sales.
// int div, qtr; // Loop counters.
//
//cout << "This program will calculate the total sales of\n";
//cout << "all the company's divisions.\n";
//cout << "Enter the following sales information:\n\n";
//
// // Nested loops to fill the array with quarterly
// // sales figures for each division.
// for (div = 0; div < NUM_DIVS; div++)
//	 {
//	 for (qtr = 0; qtr < NUM_QTRS; qtr++)
//		 {
//		 cout << "Division " << (div + 1);
//		 cout << ", Quarter " << (qtr + 1) << ": $";
//		 cin >> sales[div][qtr];
//		 }
//	 cout << endl; // Print blank line.
//	 }
//
// // Nested loops used to add all the elements.
// for (div = 0; div < NUM_DIVS; div++)
//	 {
//		 for (qtr = 0; qtr < NUM_QTRS; qtr++)
//		 totalSales += sales[div][qtr];
//	}
//		 cout << fixed << showpoint << setprecision(2);
//		 cout << "The total sales for the company are: $";
//		 cout << totalSales << endl;
		

 


//	char a;
//	cin>>a;
//	cout<<sizeof(a);
//	cout<<sizeof(char);
	
//	char k='+';
//	cout<<int(k);

//		int A[2][3];
//	for(int i=0;i<2;i++)
//	{
//		cout<<"enter the "<<i<<" row\n";
//	 for(int j=0;j<3;j++)
//	 {
//	    cout<<"Enter the "<<i<<" row of "<<j<<" of column\t";
//		cin>>A[i][j];
//	 }
//	 cout<<endl;
//	}
//	cout<<"the matrix you entered is\n";
//	
//	for(int i=0;i<2;i++)
//	{
//		cout<<"\n\n\t";
//	 for(int j=0;j<3;j++)
//	 {
//	    
//		cout<<A[i][j]<<"\t";
//	 }
//	 cout<<"\n\n";
//	}
//		int B[2][3];
//	for(int i=0;i<2;i++)
//	{
//		cout<<"enter the "<<i<<" row\n";
//	 for(int j=0;j<3;j++)
//	 {
//	    cout<<"Enter the "<<i<<" row of "<<j<<" of column\t";
//		cin>>B[i][j];
//	 }
//	 cout<<endl;
//	}
//	cout<<"the matrix you entered is\n";
//	for(int i=0;i<2;i++)
//	{
//		cout<<"\n\n\t";
//	 for(int j=0;j<3;j++)
//	 {
//	    
//		cout<<B[i][j]<<"\t";
//	 
//	 }
//	 cout<<"\n\n";
//	}
//	cout<<"the sum of matrix you entered is";
//	for(int i=0;i<2;i++)
//	{
//		cout<<"\n\n\t";
//	 for(int j=0;j<3;j++)
//	 {
//	    
//		cout<<B[i][j]+A[i][j]<<"\t";
//	 
//	 }
//	 cout<<"\n\n";
//	}

	
//	int A[2][3];
//	for(int i=0;i<2;i++)
//	{
//		cout<<"enter the "<<i<<" row\n";
//	 for(int j=0;j<3;j++)
//	 {
//	    cout<<"Enter the "<<i<<" row of "<<j<<" of column\t";
//		cin>>A[i][j];
//	 }
//	 cout<<endl;
//	}
//	
//	for(int i=0;i<2;i++)
//	{
//		cout<<"\n\n\t";
//	 for(int j=0;j<3;j++)
//	 {
//	    
//		cout<<A[i][j]<<"\t";
//	 }
//	 cout<<"\n\n";
//	}
}
