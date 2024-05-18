#include<iostream>
#include<iomanip>
using namespace std;
main()
{
  int rows,i,j;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(i = 1; i <= rows; i=i+1) //revrese pyramid k lya sab revrse krna ho ga
    {
    	cout<<setw(2*rows-i);   //triangle ko left or right  yhan sa shirt kr skta hain
        for(j = 1; j <= i; j=j+1)
        {
            cout << " *"; // pyramid half  triangle bn jae gi
        }
        cout<<endl;    // yh 2nd for loop ko end kr rha h 
    }
    cout<<"program end";
} 
