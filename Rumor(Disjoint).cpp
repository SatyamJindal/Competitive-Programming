#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cost[100005];
int par[100005],n,m;


int find(int u)
{
	return par[u] = (par[u]==u)?u:find(par[u]);
}

int join(int u,int v)
{
	if(cost[find(u)]<cost[find(v)])
	{
		par[find(v)] = par[find(u)];
	}
	else
	{
		par[find(u)] = par[find(v)];
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>cost[i];
		par[i]=i;
	}
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		join(u,v);
	}
	ll ans=0;
	
	for(int i=1;i<=n;i++)
	{
		if(find(i)==i) ans+=cost[i];
	}
	cout<<ans;
}
