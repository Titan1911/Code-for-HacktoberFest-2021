#include<bits/stdc++.h>
using namespace std;
long gcd(long x,long y)
{
    if(y==0)
    {
        return x;
    }else{
        return gcd(y,x%y);
    }
}
long lcm(long x,long y)
{
    long re=(x*y)/gcd(x,y);
    return re;
}
int main()
{
   cout<<gcd(10,15)<< " "<<lcm(10,15);   
       vector<long long> v(2);
}
