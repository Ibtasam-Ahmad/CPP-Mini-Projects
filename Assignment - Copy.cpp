#include<iostream>
using namespace std;
main()
{
    int array[10];
    int x;
    int prime;
    int sum=0;
    int j;
    for(int i=0; i<10; i++)
    {
        cout<<"enter the number\n";
        cin>>x;
        array[i]=x;
        prime=0;
        if(array[i]>1)  
        {
            prime=1;
            for(int j=2; j<x; j++)
            {
                if(x%j==0)
                {
                    prime=0; 
                    break;
                }
            }    
        }
        if(prime==1)
        {
            cout<<" prime\n"  ;
            sum=sum+x;
            cout<<"the sum is"<<sum;
        }
    }
}