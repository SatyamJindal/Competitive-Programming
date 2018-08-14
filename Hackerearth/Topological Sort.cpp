#include<bits/stdc++.h>
using namespace std;

vector<int> g[100005];
bool vis[100005];
stack<int> s;


void toposort(int node)
{
	vis[node] = true;
	for(auto v:g[node])
	{
		if(!vis[v])
		{
			toposort(v);
		}
	}
	s.push(node);
}


int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
	}
	
	for(int i=1;i<=n;i++)
	{
	    sort(g[i].begin(),g[i].end(),greater<int>());
	}
	
	for(int i=n;i>0;i--)
	{
		if(!vis[i])
		{
			toposort(i);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
