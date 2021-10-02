#include<iostream>
using namespace std;


int main()
{
    int arr[] = {2, 4, 8, 9, 1, 3, 6};
    int s=0, e= sizeof(arr)/sizeof(arr[0])-1;
    int key = 3;
    while(s<e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            cout<<"Position is "<<mid;
            return 0;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

    }
    cout<<"Element not Present";
    return 0;

}