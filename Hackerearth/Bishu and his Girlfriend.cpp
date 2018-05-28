#include<bits/stdc++.h>
using namespace std;

vector<int> g[1005];
int n;
int level[1005];

int dfs(int node,int parent)
{
	level[node]=level[parent]+1;
	for(int v:g[node])
	{
		if(v==parent) continue;
		dfs(v,node);
	}
}

int main()
{
	cin>>n;
	int u,v;
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int q;
	cin>>q;
	int liv[q];
	for(int i=0;i<q;i++) cin>>liv[i];
	level[0]=0;
	dfs(1,0);
	int lev=999999,curr=999999;
	for(int i=0;i<q;i++)
	{
		if(level[liv[i]]<lev)
		{
			curr = liv[i];
			lev=level[liv[i]];
		}
		else if(level[liv[i]]==lev)
		{
			curr = min(curr,liv[i]);
		}
	}
	cout<<curr;
	//for(int i=1;i<=n;i++) cout<<level[i]<<" ";
}
