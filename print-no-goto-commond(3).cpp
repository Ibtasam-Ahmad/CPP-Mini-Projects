/* prinr 1 to 10 with goto commond */
#include<iostream>
using namespace std;
main()
{
	int x=1;
A:	if(x<=10)
	{
		cout<<x<<endl;
		x=x+1;
		goto A;
	}
	else
	{
		cout<<"end program";
	}

}

