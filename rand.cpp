#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int x;
	srand(time(NULL));
	for(x=1;x<=1000;x++)
	{
		cout<<rand()%13+39<<" , ";
	}
}
