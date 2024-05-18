#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int i,min,max;
	cout<<"enter the min no ";
	cin>>min;
	cout<<"enter the max no ";
	cin>>max;
	srand(time(NULL));
	for(i=1;i<=100;i++)
	{
	//	cout<<rand()%10<<" "; //range is 0 to 9
	//	cout<<rand()%40+26<<" "; // range 26 to 65
    	cout<<min+rand()%(max-min+1)<<" ";
	}	
}
