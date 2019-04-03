#include<bits/stdc++.h>
using namespace std;

vector<int> g[200005];
int color[200005];
int clr=1;
bool vis[200005];
bool ispart=true;

void dfs(int node,int par)
{
	
	vis[node]=true;
	if(color[node]==0)
		color[node]=3 - color[par];
	else if(color[node]==(color[par]))
		ispart=false;
	for(auto i:g[node])
	{
		if(color[node]==color[i])
			ispart = false;
		if(!vis[i])
			dfs(i,node);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<pair<int,int> > vi;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
		vi.push_back(make_pair(u,v));
	}
	color[1]=1;
	dfs(1,0);
	if(!ispart)
		cout<<"NO"<<"\n";
	else
	{
		cout<<"YES"<<"\n";
		string ans="";
		for(auto i:vi)
		{
			if(color[i.first]==1)
				ans+='0';
			else
				ans+='1';
		}
		cout<<ans<<"\n";
	}
}
