#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		int dp[1001];
		for(int i=0;i<1001;i++)
			dp[i]=1000000;
		dp[0]=0;
		for(int i=1;i<1001;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(b[j]<=i)
					dp[i] = min(dp[i],dp[i-b[j]]+1);
			}
		}
		int ans=0;
		for(int i=0;i<n;i++)
			ans+=dp[a[i]*2];
		cout<<ans<<"\n";
	}
}
