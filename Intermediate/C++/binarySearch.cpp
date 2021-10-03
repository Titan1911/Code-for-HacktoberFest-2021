//n0tv1cky
#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {2, 4, 8, 9, 1, 3, 6};
    int n = sizeof(arr)/sizeof(int);
    int l = 0, r = n-1;
    int x = 3;
    char found = 'F';
    sort(arr, arr+n);

    while(found=='F') {
        int mid = (l+r)/2;
        if(arr[mid]==x) {
            found = 'T';
        } else if(arr[mid]<x){
            l = mid;
        } else if(arr[mid]>x) {
            r = mid+1;
        }
    }

    if(found=='F') {
        cout<<"Element not found";
    } else {
        cout<<"Element found";
    }
}