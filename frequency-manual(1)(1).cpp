//frequency of control vovel
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	char a[10] ,y ;
	int x, min=65, max=90, c=0;
	srand(time(NULL));
	for( int i=0; i<10; i++)
	{
		a[i]=min + rand()%(max-min+1); //65 to 90 all capital alphabets
        cout<<a[i];
	}
	cout<<endl;
	cout<<"enter alphaber\n";
	cin>>y;
A:	for( int i=0; i<10; i++)
	{
		if(a[i]==y)
		{
			c++;
		}
//		else if(a[i]!=y)
		{
//			goto B;
		}
	}
	cout<<"frequencu is "<<c;
	c=0;
	cout<<" if u want to continue click alphabet & to end exit the program\n";
	cin>>y;
	goto A;
//	if(a[i]==y)
	{
//		goto A;
	}
//	else
//	{
//		goto A;
//	}
B:  cout<<" program end";
}
