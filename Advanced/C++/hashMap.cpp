#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements\n";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter array elements\n";
    for(auto &i:a)
        cin>>i;

    map<int,int> m;

    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    
    for(auto it:m){
        if(it.second>1){
            cout<<it.first<<" has occured more than once\n";
        }
    }

    return 0;



}