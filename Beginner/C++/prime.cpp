#include<bits/stdc++.h>
using namespace std;
int main()
{int i,n,flag=0;
cout<<"Enter a number:";
cin>>n;
if(n<1)
cout<<"Only natural numbers are accepted";
else if(n==1)
cout<<"The nUmber is neither prime nor composite";
else 
{for(i=2;i<n;i++)
{if(n%i==0)
flag=1;}
if(flag==0)
cout<<"The number is prime.";
else cout<<"The number is not a prime.";
}
return 0;}
