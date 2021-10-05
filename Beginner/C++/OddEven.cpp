//Solved without using conditional operators
#include<bits/stdc++.h>
using namespace std;
int main()
{char p[2][5]={"even","odd"};
int t;
cout<<"Enter the number:";
cin>>t;
cout<<"The number is "<<p[t%2];
return 0;
}