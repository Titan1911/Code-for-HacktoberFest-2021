#include<iostream>
using namespace std;

int main()
{
long long arr[3];
arr[0]=0;
arr[1]=1;
arr[2]=arr[0]+arr[1];
cout<<"0 1 ";
long long r=0;
long long n=9;
while(r<n){
arr[0]=arr[1];
arr[1]=arr[2];    
arr[2]=arr[0]+arr[1];
cout<<" "<<to_string(arr[2]);
r++;
}
return 0;
}