#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int sum=0,sum1=0,ind=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0) sum+=a[i];
		else sum1+=a[i];
	}
	cout<<sum-sum1;
}
