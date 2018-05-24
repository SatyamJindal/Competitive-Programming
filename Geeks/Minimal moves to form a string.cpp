#include<bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		long long dp[n];
		memset(dp,INF,sizeof(dp));
		dp[0]=1;
		string s1="";
		string s2="";
		s1+=s[0];
		for(int i=1;i<n;i++)
		{
			s1+=s[i];
			s2=s.substr(i+1,i+1);
			dp[i]=min(dp[i],dp[i-1]+1);
			if(s1==s2)
			{
				dp[i*2+1]=min(dp[i]+1,dp[i*2]+1);
			}
		}
		cout<<dp[n-1]<<"\n";
	}
}
