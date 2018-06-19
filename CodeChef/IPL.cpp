#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	long sum=0;
	long a[n],dp[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(n<3) cout<<sum<<"\n";
	else if(n==3) cout<<sum-a[min_element(a,a+n)-a]<<"\n";
	else
	{
		memset(dp,0,sizeof(dp));
		for(int i=0;i<3;i++) dp[i]=a[i];
		for(int i=3;i<n;i++)
		{
			dp[i] = min(a[i]+dp[i-1],min(a[i]+dp[i-3],a[i]+dp[i-2]));
		}
		long min_val = min(dp[n-1],min(dp[n-2],dp[n-3]));
		cout<<sum-min_val<<"\n";
	}
	
}
