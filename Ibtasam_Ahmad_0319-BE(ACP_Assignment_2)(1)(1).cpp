#include<iostream>
using namespace std;
main()
{
	cout<<"(~(I)~)\n";
	int rows,i,j;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(i = 1; i <= rows; i=i+1)
    {
        for(j = 1; j <= i; j=j+1)
        {
        cout << "* ";  
		}
		cout<<endl;
	}
	cout<<"program end";
	
//	int n;
//	cout<<"enter the value of n ";
//	cin>>n;
//	for(int i=1; i<=n; i++)
//	{
//		if(i%2!=0)
//		{
//			cout<<"*\n";
//		}
//		else
//		{
//			cout<<"**\n";
//		}
//	}
}
