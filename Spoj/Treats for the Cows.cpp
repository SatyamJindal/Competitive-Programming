#include<bits/stdc++.h>
using namespace std;


int ans(int a[],int l,int r,int n,int dp[][2006])
{
	if(l>r)
		return 0;
	
	if(dp[l][r]!=-1)
		return dp[l][r];
	
	return dp[l][r] = max(ans(a,l+1,r,n,dp)+(n-r+l)*(a[l]),ans(a,l,r-1,n,dp)+(n-r+l)*(a[r]));
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int dp[n+1][2006];
	memset(dp,-1,sizeof(dp));
	cout<<ans(a,0,n-1,n,dp)<<"\n";
}
