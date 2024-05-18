#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"enter the value of x ";
	cin>>x;
	cout<<"enter the value of y ";
	cin>>y;
/*	cout<<"value of x is "<<x<<endl;
	cout<<"value of y is "<<y<<endl;
	swap(x,y);
	cout<<"interchanged value of x is "<<x<<endl;
	cout<<"interchanged value of y is "<<y;   */
	

    cout << "Before swapping\n" ;
    cout << "x = " << x << ", y = " << y << endl;
    
    int z;
    z = x;
    x = y;
    y = z;
    
//    z = x + y;
//    x = z - x;
//    y = z - y;

//    x = x + y;
//    cout<<x;
//    y = x - y;
//    cout<<y;
//    x = x - y;
//    cout<<x;

    cout << "After swapping\n" ;
    cout << "x = " << x << ", y = " << y << endl;

}
