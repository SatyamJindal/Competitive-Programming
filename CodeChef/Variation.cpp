#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		int p=a[i]+k;
		int a1 = lower_bound(a,a+n,p)  - a;
		//cout<<a[i]<<" "<<a1<<"\n";
		if(a1!=n) count+=(n-a1);
		//cout<<i<<" "<<count<<"\n";
	}
	cout<<count<<"\n";
}
