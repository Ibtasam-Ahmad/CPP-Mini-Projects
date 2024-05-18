//for loop to print pyramid
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
  int rows,i,j;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(i = 1; i <= rows; i=i+1)
    {
    	cout<<setw(2*rows-i);   //triangle bn jae ga agar - nhi kia to
        for(j = 1; j <= i; j=j+1)
        {
            cout << "* ";  //yhan p * ko chnge krna sa pyramid bdl gae ga
        }
        cout<<endl;    // yh 2nd for loop ko end kr rha h 
    }
    cout<<"program end";
} 
