#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the number of random numbers you wish to generate :  ";
    cin>>t;
    cout<<"The random numbers are:   "<<endl;
    while(t--){
        cout<<rand()<<endl;
    }
    return 0;
}