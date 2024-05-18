//frequency of vovel
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	srand(7);
	char x[100];
	int min=65,max=99,j,a=0,e=0,i=0,o=0,u=0;
	for(j=0;j<100;j++)
	{
		x[j]=min+rand()%(max-min+1);
		if(x[j]=='A')
		{
			a++;
		}
		else if(x[j]=='I')
		{
			i++;
		}
		else if(x[j]=='E')
		{
			e++;
		}
		else if(x[j]=='O')
		{
			o++;
		}
		else if(x[j]=='U')
		{
			u++;
		}
	}
		cout<<"A="<<a<<endl;
		cout<<"E="<<e<<endl;
		cout<<"O="<<o<<endl;
		cout<<"I="<<i<<endl;
		cout<<"U="<<u<<endl;
}
