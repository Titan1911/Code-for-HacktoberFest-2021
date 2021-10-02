#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 2){
        return true;
    }
    bool result = true;
    for(int i = 2; i <= sqrt(n); i ++){
        if(n%i == 0){
            result = false;
            return result;
        }
    }
    return result;
}

int main()
{
    int t;
    cout<<"Enter the number of test cases:  ";
    cin>>t;
    cout<<"To check if the numbers entered are prime or not!, input your numbers!"<<endl;
    
    for(int i = 0; i < t; i++){
        int n;
        cout<<"testcase " + i + 1 <<" :  ";
        cin>>n;
        if(n == 1){
            cout<<"Neither prime nor composite!"<<endl;
            continue;
        }
        if(n<1){
            cout<<"Invalid input!"<<endl;
        }
        if(isPrime(n)){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    }
    return 0;
}