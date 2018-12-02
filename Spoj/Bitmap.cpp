#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int ans[n][m];
		vector<pair<int,int> > white,black;
		vector<string> vi;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			for(int j=0;j<s.size();j++)
			{
				ans[i][j]=0;
				if(s[j]=='0')
					black.push_back({i,j});
				else
					white.push_back({i,j});
			}
		}
		for(auto i:black)
		{
			int mi=1e9;
			for(auto j:white)
				mi = min(mi, abs(i.first-j.first) + abs(i.second-j.second));
			ans[i.first][i.second] = mi;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
}
