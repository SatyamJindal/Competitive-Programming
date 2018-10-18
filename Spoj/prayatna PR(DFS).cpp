#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> g[],bool vis[])
{
	vis[node] = true;
	for(auto v:g[node])
	{
		if(!vis[v])
			dfs(v,g,vis);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,e,count=0;
		cin>>n;
		vector<int> g[n+1];
		bool vis[n];
		memset(vis,false,sizeof(vis));
		cin>>e;
		for(int i=0;i<e;i++)
		{
			int u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		for(int i=0;i<n;i++)
		{
			if(!vis[i])
			{
				dfs(i,g,vis);
				count+=1;
			}
			
		}
		cout<<count<<"\n";
	}
}
