#include<bits/stdc++.h>
using namespace std;


int dfs(int node,vector<int> g[],int level[],int vis[])
{
	vis[node]=1;
	for(auto i:g[node])
	{
		if(!vis[i])
		{
			level[i] = level[node]+1;
			dfs(i,g,level,vis);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> g[n+5];
	int level[n+5],vis[n+5];
	memset(level,0,sizeof(level));
	memset(vis,0,sizeof(vis));
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	level[1]=0;
	dfs(1,g,level,vis);
	int a=1;
	for(int i=1;i<=n;i++)
	{
		if(level[i]>level[a])
			a=i;
	}
	memset(level,0,sizeof(level));
	memset(vis,0,sizeof(vis));
	level[a]=0;
	dfs(a,g,level,vis);
	int dia = *max_element(level,level+n+5);
	int b=a;
	for(int i=1;i<=n;i++)
	{
		if(level[i]>level[b])
			b=i;
	}
	int levelb[n+5];
	memset(levelb,0,sizeof(levelb));
	memset(vis,0,sizeof(vis));
	levelb[b]=0;
	dfs(b,g,levelb,vis);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(i!=a && i!=b)
		{
			int f = level[i] + levelb[i];
			ans = max(ans,(f+dia)/2);
		}
	}
	cout<<ans<<"\n";
	
}
