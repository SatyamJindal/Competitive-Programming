#include<bits/stdc++.h>
using namespace std;

vector<int> g[100005];
int n,m;
int par[100005];
int result=0;
bool vis[100005];
bool check=false;

void dfs(int node)
{
	vis[node]=true;
	for(int i=0;i<g[node].size();i++)
	{
		if(vis[g[node][i]]==false){
		if(check==false)
		{
		    if(g[g[node][i]].size()-1>g[node].size()) result+=1;
		    check=true;
		}
		else if(g[g[node][i]].size()>g[node].size()) result+=1;
		dfs(g[node][i]);
	}
	}
}


int main()
{
	cin>>n>>m;
	int mini=9999999;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==false)
		dfs(i);
		check=false;
	}
	
	cout<<result;
}
