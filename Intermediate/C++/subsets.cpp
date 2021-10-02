#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcd";
    cout<<"The given string is "+ s+ " ."<<endl<<"It's subsets are:  "<<endl;
    for(int i = 0; i < 4; i ++){
        for(int j = i; j < 4; j ++){
            for(int k = i; k <= j; k ++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }
    return 0;
}