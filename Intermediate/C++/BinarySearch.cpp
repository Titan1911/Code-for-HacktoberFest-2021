//SakhinetiPraveena
//Binary Search for 3 in 2 4 8 9 1 3 6

#include <bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int key,int n){
    int s=0,e=n-1;                                    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<key<<" is found in the array.";
            return;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else e=mid-1;
    }
    cout<<key<<" is not found in the array.";
}
int main(){
    int n=7;
    int arr[7]={2, 4, 8, 9, 1, 3, 6};
    sort(arr, arr + n);
    binarySearch(arr,3,7);
    return 0;
}
