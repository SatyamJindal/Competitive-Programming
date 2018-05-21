#include<bits/stdc++.h>
using namespace std;


typedef pair<int,int> pi;
#define INF 0x3f3f3f3f

void dij(int source,int n,vector< pi > a[],long long dist[])
{
	priority_queue<pi,vector<pi>,greater<pi> > q;
	dist[source]=0;
	q.push({0,source});
	while(!q.empty())
	{
		int u = q.top().second;
		q.pop();
		for(auto c: a[u])
		{
			int v= c.first;
			int w= c.second;
			if(dist[v]>dist[u]+w)
			{
				dist[v]=dist[u]+w;
				q.push({dist[v],v});
			}
		}
	}
		
}


int main()
{
	int n,m;
	cin>>n>>m;
	vector< pi > a[n+1];
	long long dist[n+1];
	memset(dist,INF,sizeof(dist));
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		a[u].push_back({v,w});
	}
	dij(1,n,a,dist);
	for(int i=2;i<=n;i++)
	{
		if(dist[i]==INF) cout<<1e9<<" ";
		else cout<<dist[i]<<" ";
	}
}



