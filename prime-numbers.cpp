#include<iostream>
// prime numbers
using namespace std;
int main()
{
//	int n;
//	cout << "Enter Number to Generate Prime Numbers: ";
//	cin >> n;
//	int count = 0;
//	bool prime = true;
//	for (int i = 2; count < n; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				prime = false;
//				j = i;
//			}
//		}
//		if (prime == true)
//		{
//			cout << i << endl;
//			count++;
//		}
//		prime = true;
//	}



int array[10];
	int prime = 1;
	for(int i=0; i<10; i++)
	{
		cout<<"enter number";
		cin>>array[i];
		prime = 1;
		
			for(int j=2; j<array[i]; j++)
			{	
				if(array[i]%j==0)
				{
					prime = 0;
					cout<<"not a prime\n";
					break;	
				}
			}
		
		if(prime==1)
		{
			cout<<array[i]<<"prime\n";
		}
	}

}
