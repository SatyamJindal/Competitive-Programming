#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


ll cost[100005];
int n,m;
bool vis[100005];
ll tot_cost;

vector<int> g[100005];

void dfs(int node,ll &mini)
{
	vis[node] = true;
	mini  = min(mini,cost[node]);
	//cout<<"mini "<<mini<<" co "<<cost[node]<<"\n";
	for(int u:g[node])
	{
		if(!vis[u])
		{
			dfs(u,mini);
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	memset(cost,0,sizeof(cost));
	for(int i=1;i<=n;i++) cin>>cost[i];
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			ll mini=0x3f3f3f3f;
			dfs(i,mini);
			//cout<<"mini "<<mini<<"\n";
			tot_cost+=mini;
		}
		
	}
	cout<<tot_cost;
}

