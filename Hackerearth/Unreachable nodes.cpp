#include<bits/stdc++.h>
using namespace std;


int dfs(int node,vector< vector<int> > edges,bool vis[])
{
	vis[node]=true;
	for(int i=0;i<edges[node].size();i++)
	{
		if(vis[edges[node][i]]==false)
		{
			dfs(edges[node][i],edges,vis);
		}
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector< vector<int> > edges(n+1);
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	bool vis[n+1];
	for(int i=0;i<n+1;i++) vis[i]=false;
	int x;
	cin>>x;
	dfs(x,edges,vis);
	vis[x]=true;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==false) count+=1;
	}
	cout<<count;
}
