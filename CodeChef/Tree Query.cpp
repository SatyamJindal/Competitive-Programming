#include<bits/stdc++.h>
using namespace std;

const int maxn=500005;

vector<int> g[maxn];
long long lazy[maxn],val[maxn];


void dfs(int node,int par,long long prev)
{
	val[node]+=lazy[node]+prev;
	for(int v:g[node])
	{
		if(v==par) continue;
		dfs(v,node,prev+lazy[node]);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>val[i];
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	while(q--)
	{
		int x;
		long long u;
		cin>>x>>u;
		lazy[x]+=u;
	}
	
	dfs(1,-1,0);
	for(int i=1;i<=n;i++)
	{
		cout<<val[i]<<" ";
	}
}
