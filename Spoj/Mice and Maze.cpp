#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,e,t,m,u,v,w;
ll dist[101][101];

#define INF 0x3f3f3f3f

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>e>>t;
	for(int i=0;i<101;i++)
	{
		for(int j=0;j<101;j++)
		{
			if(i!=j)
				dist[i][j]=INF;
		}
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		dist[u][v]=w;
	}
	
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j] = dist[i][k]+dist[k][j];
			}
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(dist[i][e]<=t)
			ans+=1;
	}
	cout<<ans;
}
