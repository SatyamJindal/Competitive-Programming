#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int m,int n)
{
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j] = dp[i-1][j-1]+1;
			}
			else
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	return dp[m][n];
}


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int l1,l2;
		cin>>l1>>l2;
		string s1,s2;
		cin>>s1>>s2;
		cout<<lcs(s1,s2,s1.size(),s2.size())<<"\n";
	}
}
