/* Enter 10 values in an array (using cin statement)
Find out the factorial of all the numbers u entered in array
Add the factorial and display the sum  */
#include<iostream>
using namespace std;
main()
{
	cout<<"Enter any 10 random numbers from 0 to 16\n\t To find factorial and sum of all the factorials\n";
	int x;
	unsigned long long int product = 1;
	unsigned long long int sum = 0;
	int sum_individual = 1;
	int array[10];
	for( int i=0; i<10; i++)
	{
		cout<<endl<<"enter the "<<i+1<<" number ";
		cin>>x;
		array[i]=x;
		if(array[i]>=0 && array[i]<17)
		{
			for( int j=1; j<=array[i]; j++)
		{
			product = j * product;
		}
		cout<<"The factorial for "<<array[i]<<" is : \t"<<product<<endl;
		sum = sum + product;
		product = 1;
		}
		else
		{
			cout<<"The number you entered is outside the range\nEnter any random number from 0 to 16\n";
		}
	}
	cout<<endl<<"The sum for the all the factorials are : "<<sum;
	cout<<endl<<"\n\nAssignment 1 Advance Computer Programming \nIbtasam Ahmad\t Roll Number # 0319BE\n\tBs-5-Evening";
}