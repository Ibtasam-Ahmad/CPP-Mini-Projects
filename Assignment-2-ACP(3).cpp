/* The program should take two random numbers to be added, such as 
 247
+129 
The program should then pause while the student works on the problem. When the 
student is ready to check the answer, he or she can press a key and the program will 
display the correct solution like:
 247
+129
 376 */
 
 /* Roll the dice 100 times.
 Generate random numbers to show the outcome.
 Make a program that restrict 1 and 3 to be in outcome.
Display how many times 2, 4,5,6 appeared */
 

 /* Write an essay take inputs from user. Output should be like this
//Single quotation '  means take input from user
My name is 'Komal Maqsood'
My age is '21'
I live in 'lahore'
My favourite bird is 'parrot'
My lucky nmbr is '5'
My hobby is 'sketching'
Where integer lucky nmbr, age must have a restriction.
If user enter input rather than int data type program should display a warning.
And retake the number again until unless it is entered in integer data type. */
 
 
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	string name;
	cout<<"Enter your name\t";
	getline(cin, name);
	cout<<"My name is '"<<name<<"'\n";
	cin.clear();
	int age;
	cout<<"enter your age\t";
	while(!(cin>>age))
	{
		cout<<"Error: enter number\t";
		cin.clear();
		cin.ignore(123,'\n');
	}
	cout<<"My age is '"<<age<<"'\n";
	string city;
	cout<<"Enter your city\t";
	getline(cin, city);
	cout<<"I live in '"<<city<<"'\n";
	string animal;
	cout<<"Enter your favroute animal\t";
	getline(cin, animal);
	cout<<"My favorite bird is '"<<animal<<"'\n";
	int lucky_no;
	cout<<"enter lucky no\t";
	while(!(cin>>lucky_no))
	{
		cout<<"Error: enter number\t";
		cin.clear();
		cin.ignore(123,'\n');
	}
	cout<<"My lucky number is '"<<lucky_no<<"'\n";
	string hobby;
	cout<<"Enter your hobby\t";
	getline(cin, hobby);
	cout<<"My hobby is '"<<hobby<<"'\n";
}
 
 
// #include<iostream>
// #include<stdlib.h>
// #include<time.h>
// using namespace std;
// main()
// {
// 	int num, num_2=0, num_4=0, num_5=0, num_6=0;
// 	srand(time(NULL));
// 	cout<<"Number 1 and 3 will be ignored\n";
// 	cout<<"The random numbers are\n\n";
// 	for(int i=0; i<100; i++)
// 	{
//A:		num=1 + rand()%6;
// 		if(num!=1 && num!=3)
// 		{
// 			if(num==2)
// 			{
// 				cout<<num<<"\t";
// 				num_2 ++;
//			}
//			else if(num==4)
//			{
//				cout<<num<<"\t";
//				num_4 ++;
//			}
//			else if(num==5)
//			{
//				cout<<num<<"\t";
//				num_5 ++;
//			}
//			else
//			{
//				cout<<num<<"\t";
//				num_6 ++;
//			}
//		}
//		else
//		{
//			goto A;
//		}
//	}
//	cout<<"\n\nnumber 2 appeared "<<num_2<<" times\n";
//	cout<<"number 4 appeared "<<num_4<<" times\n";
//	cout<<"number 5 appeared "<<num_5<<" times\n";
//	cout<<"number 6 appeared "<<num_6<<" times\n";
// }
// 
 
 
 
 
 
//#include<iostream>
//#include<stdlib.h>
//#include<time.h>
//using namespace std;
//main()
//{
//	int num,num1,num2;
//	srand(time(NULL));
//	num1=rand();
//	num2=rand();
//	cout<<"The random numbers are \t"<<num1<<" and "<<num2;
//	num=num1+num2;
//	cout<<"\nAdd the two random numbers\n";
//	cout<<"If you are done with the sum then ";
//	system("pause");
//	cout<<"\nThe sum of the random numbers are "<<num;
//}
