#include <iostream>
#include <array>
using namespace std;

int main()
{
    int arr[] = {4, 3, 1, 5, 2};
    int mx = arr[0];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+arrSize);
    for(int i=arrSize-2;i>=0;i++)
    {
        if(arr[i]!=arr[arrSize-1])
        {
            cout<<"The second largest number is "<<arr[i];
            return 0;
        }
    }

    return 0;
}