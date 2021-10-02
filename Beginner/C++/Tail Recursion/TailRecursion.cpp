#include<iostream>
using namespace std;

void TailRecursionPrint(int n)
{
    if(n<=0)
    return;
    
    cout<<n<<" ";

    TailRecursionPrint(n-1);
}


int main()
{
    int n;
    cin>>n;
    TailRecursionPrint(n);

}