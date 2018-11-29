#include<bits/stdc++.h>
using namespace std;

int lcs(string s,string s1)
{
	int dp[s.size()+1][s1.size()+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=s.size();i++)
	{
		for(int j=0;j<=s1.size();j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(s[i-1]==s1[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[s.size()][s1.size()];
}


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		string s1="";
		for(int i=s.size()-1;i>-1;i--)
			s1+=s[i];
		int lon = lcs(s,s1);
		cout<<s.size()-lon<<"\n";
	}
}
