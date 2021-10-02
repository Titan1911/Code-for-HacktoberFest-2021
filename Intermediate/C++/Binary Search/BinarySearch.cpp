// Time Complexity: - O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);   cin.tie(NULL);    // For fast input output

    int a[] = {2, 4, 8, 9, 1, 3, 6};
    int element_find=3;
    sort(a,a+n);
    int i,ans=-1;
    int l=0,r=n-1;

    while(l<r)
    {
        int mid= (l+r)/2;
        if(a[mid]>=element_find)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    if(a[l]==element_find)
    {
        ans=l+1;
    } 
    cout<<ans;
}
