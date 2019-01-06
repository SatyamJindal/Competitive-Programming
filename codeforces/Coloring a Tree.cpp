#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> g[10005];
int color[10005];
int ans=1;
bool vis[10005];

void dfs(int node)
{
	vis[node]=true;
	for(auto v:g[node])
	{
		if(!vis[v])
		{
			if(color[v]!=color[node])
				ans++;
			dfs(v);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x;
		cin>>x;
		g[i].push_back(x);
		g[x].push_back(i);
	}
	for(int i=1;i<=n;i++)
		cin>>color[i];
	dfs(1);
	cout<<ans<<"\n";
}
