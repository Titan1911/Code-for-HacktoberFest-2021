#include<bits/stdc++.h>
using namespace std;
int main()
{int len;
int A[]={4,3,1,5,2};
 len=sizeof(A)/sizeof(int);
 sort(A,A+len);
 cout<<A[3];
 return 0;}