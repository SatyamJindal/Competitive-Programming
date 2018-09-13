#include<bits/stdc++.h>
using namespace std;

int n;
int ans;
bool vis[10005];

int dfs(int node,bool vis[],vector<int> g[])
{
	if(vis[node]) 
	{
		ans = node;
		return 0;
	}
	vis[node] = true;
	for(int v: g[node])
	{
		dfs(v,vis,g);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	vector<int> g[n+1];
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		g[i+1].push_back(x);
	}
	
	for(int i=0;i<n;i++)
	{
		memset(vis,false,sizeof(vis));
		dfs(i+1,vis,g);
		cout<<ans<<" ";
	}
}
