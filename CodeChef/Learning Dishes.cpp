#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e6 + 10;
vector<int> g[N];
ll a[N];
int par[N][25];
ll phit[N];
ll mx[N];
int n;


void dfs(int u, int p)
{
	for(int v: g[u])
	{
		if(v!=p)
		{
			phit[v] = phit[u] + (a[v]>mx[u]?1:0);
			par[v][0]=u;
			mx[v] = max(mx[u],a[v]);
			dfs(v,u);
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
		cin>>n;
		for(int i=1;i<=n;i++) g[i].clear();
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=2;i<=n;i++)
		{
			int u;
			cin>>u;
			g[i].push_back(u);
			g[u].push_back(i);
		}
		phit[1]=1; par[1][0]=0; mx[1]=a[1];
		phit[0]=0; par[0][0]=0; mx[0]=0;
		
		dfs(1,0);
		for(int j=1;j<25;j++)
		{
			for(int i=0;i<=n;i++)
			{
				par[i][j] = par[par[i][j-1]][j-1];
			}
		}
		
		
		ll Pr=0;
		int q;
		cin>>q;
		
		while(q--)
		{
			ll a,b;
			cin>>a>>b;
			ll v = a^Pr; ll w = b^Pr;
			
			if(w<mx[v])
			{
				ll itr = v;
				for(int i=24;i>=0;i--)
				{
					if(w<mx[par[itr][i]])
					{
						itr = par[itr][i];
					}
				}
				Pr = (phit[v] - phit[par[itr][0]]);
			}
			else
			{
				Pr=0;
			}
			cout<<Pr<<"\n";
			
		}
		
		
	}
	
	
	
}
