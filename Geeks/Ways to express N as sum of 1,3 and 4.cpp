#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long dp[10005];
	dp[0]=1; dp[1]=1; dp[2]=1; dp[3]=2;
	for(int i=4;i<10005;i++)
	{
		dp[i]=(dp[i-4]+dp[i-3]+dp[i-1])%(1000000007);
	}
	//for(int i=0;i<10;i++) cout<<dp[i]<<" ";
	//cout<<"\n";
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]%(1000000007)<<"\n";
	}
}
