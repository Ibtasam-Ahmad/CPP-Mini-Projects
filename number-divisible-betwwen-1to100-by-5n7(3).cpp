//print the number divisible by 5 and 7 in betwween 1 to 1000
#include<iostream>
using namespace std;
main()
{
	int  x;
	cout<<"the number divisible by number 5 and 7 are \n";
	for(x=1;x<=1000;x=x+1)
	{
		if(x%5==0 &&  x%7==0)
		{
			cout<<"the number divisible by 5 and 7 are "<<x<<endl;
		}
		
	}
}
