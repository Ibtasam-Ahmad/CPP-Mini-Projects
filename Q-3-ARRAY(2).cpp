/*Write a program that store capital alphabets (A to Z) in an array and then find out
vowel letter from this array of letter.*/
#include<iostream>
using namespace std;
main()
{
	char A[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i;
	for(i=0;i<26;i++)
	{
			cout<<A[i];	
	}
	cout<<endl;
	cout<<"wowels are\n";
	for(i=0;i<26;i++)
	{
		if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' )
		{
			cout<<A[i]<<"=vovel\n";
		}
	}
}
