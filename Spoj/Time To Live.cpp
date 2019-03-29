#include<bits/stdc++.h>
using namespace std;

int level[100005];
bool vis[100005];
vector<int> g[100005];

void dfs(int node)
{
	vis[node]=true;
	for(auto i:g[node])
	{
		if(!vis[i])
		{
			level[i] = level[node]+1;
			dfs(i);
		}
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		memset(level,0,sizeof(level));
		memset(vis,false,sizeof(vis));
		for(int i=1;i<100005;i++)	g[i].clear();
		int n;
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			u++,v++;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		dfs(1);
		level[1]=0;
		int ind=-1,lev=-1;
		for(int i=1;i<=n;i++)
		{
			if(level[i]>lev)
			{
				ind=i;
				lev=level[i];
			}
		}
		memset(level,0,sizeof(level));
		memset(vis,false,sizeof(vis));
		dfs(ind);
		
		int ans = *max_element(level,level+100005);
		if(ans%2)
			cout<<(ans+1)/2<<"\n";
		else
			cout<<(ans/2)<<"\n";
	}
}
