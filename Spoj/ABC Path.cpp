#include<bits/stdc++.h>
using namespace std;

int ans;
int h,w;
int vis[51][51];

void dfs(vector<string> vi,int r,int c,int dep)
{
	ans = max(ans,dep);
	int rr[8] = {-1,-1,-1,0,0,1,1,1};
	int cc[8] = {-1,0,1,-1,1,-1,0,1};
	
	for(int i=0;i<8;i++)
	{
		int tempr = r + rr[i];
		int tempc = c + cc[i];
		
		if((tempr>=0 && tempr<h) && (tempc>=0 && tempc<w) && !vis[tempr][tempc])
		{
			if(vi[tempr][tempc]==vi[r][c]+1)
			{
				vis[tempr][tempc]=1;
				dfs(vi,tempr,tempc,dep+1);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>h>>w;
	int ct=0;
	while(h && w)
	{
		ans=0;
		ct+=1;
		memset(vis,0,sizeof(vis));
		string s;
		vector<string> vi;
		for(int i=0;i<h;i++)
		{
			cin>>s;
			vi.push_back(s);
		}
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(vi[i][j]=='A')
				{
					vis[i][j]=1;
					dfs(vi,i,j,1);
				}
			}
		}
		cout<<"Case "<<ct<<": "<<ans<<"\n";
		cin>>h>>w;
		
	}
}
