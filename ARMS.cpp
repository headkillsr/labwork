#include <iostream>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"enter a number";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    cout<<"Armstrong number"<<endl;
    else
    cout<<"not a Armstrong number"<<endl;
    return 0;
}

