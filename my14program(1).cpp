/*write the program 
check if the number is vovel*/
#include <iostream>
using namespace std;
main()
{
	char alphabet;
	cout<<" enter the letter : ";
	cin>>alphabet;
	if (alphabet=='A'||alphabet=='a'|| alphabet=='E'||alphabet=='e'||alphabet=='I'|| alphabet=='i'||alphabet=='O'||alphabet=='o'||alphabet=='U'||alphabet=='u')
	{
		cout<<" alphabet entered is "<<alphabet<<endl<< "the alphabet enter is vovel ";
	}
	else
	{
		cout<<" alphabet entered is "<<alphabet<<endl<<" the alphabet enter is not a vovel";
	}
}
