#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector< vector<int> > edges(n+1);
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	int x;
	cin>>x;
	int levels[n+1];
	memset(levels,0,sizeof(levels));
	bool vis[n+1];
	memset(vis,false,sizeof(vis));
	levels[1]=1;
	vis[1]=true;
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		for(int i=0;i<edges[p].size();i++)
		{
			if(vis[edges[p][i]]==false)
			{
				levels[edges[p][i]]=levels[p]+1;
				vis[edges[p][i]]=true;
				q.push(edges[p][i]);
			}
		}
	}
	//for(int i=1;i<n+1;i++) cout<<levels[i]<<" ";
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(levels[i]==x) count+=1;
	}
	cout<<count;
}
