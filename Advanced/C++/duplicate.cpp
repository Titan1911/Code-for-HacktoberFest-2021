#include <iostream>
#include <unordered_map>
using namespace std;
void getDuplicate(int arr[], int n)
{
    unordered_map<int,int> freq;
    for(int index=0;index<n;index++)
        freq[arr[index]]++;
    bool duplicate=false;
    unordered_map<int,int> :: iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++)
    {
        if(itr->second > 1)
        {
            cout<<itr->first<<" ";
            duplicate=true;
        }
    }
    if(!duplicate)
        cout<<"No duplicate items"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    getDuplicate(arr,n);
    return 0;
}
