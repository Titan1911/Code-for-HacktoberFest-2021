#include<bits/stdc++.h>
using namespace std;
int main()
{char str[]="abcd";
int i,j,k,len;
cout<<"The subsets are:\n";
for(i=0;i<4;i++)
{for(j=i;j<4;j++)
{for(k=i;k<=j;k++)
cout<<str[k];
cout<<"\n";
}}
return 0;
}