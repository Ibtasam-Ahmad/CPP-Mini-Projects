#include<iostream>
using namespace std;
main()
{
	char A[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char B[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int i;
	for(i=0;i<26;i++)
	{
		if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' )
		{
			cout<<A[i]<<" = vovel\n";
		}
	}
}
