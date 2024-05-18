#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
int i;
srand(time(NULL));
for(i=1;i<=100;i++)
{
// cout<<rand()<<",";// generate random no in the range 0 to 32767
// cout<<rand()%10<<",";// range is now 0 to 9
// cout<<rand()%100<<",";// range is now 0 to 99
//cout<<rand()%2<<",";// range is now 0 and 1
cout<<rand()%40+26<<" , ";// range is now 26 and 65
}
}
