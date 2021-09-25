//write a program to calculate factorial of a given no. using a function fact.
//Harsh verma 200111197
#include<iostream>
using namespace std;

long long facto(int n)
{
if(n==1)
return 1;
else
return(n*facto(n-1));
}
int main()
{
long long n;
cin>>n;
cout<<facto(n);
return 0;
}

