#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	int b[n];
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		b[i]=sum;
	}
	cout<<"Elements of prefix sum are /n";
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	return 0;
}
