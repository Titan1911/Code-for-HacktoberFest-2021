#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 3, 1, 5, 2};
    int length = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+(length));
    int second = arr[length - 2];
    
    cout<<"The second largest number is :  "<<second<<" ."<<endl;
    return 0;
}