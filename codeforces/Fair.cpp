#include<bits/stdc++.h>
using namespace std;

const int N=101000,K=110;
int n,m,k,s,a[N],dis[N][K],q[N],x,y;

vector<int> v[N],e[N];

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>m>>k>>s;
	
	for(int i=1;i<n+1;i++)
	{
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		e[x].push_back(y);
		e[y].push_back(x);
	}
	
	for(int c=1;c<k+1;c++)
	{
		int t=0;
		for(int j=1;j<n+1;j++) dis[j][c] = n+1;
		for(auto u:v[c])
		{
			q[t++] = u;
			dis[u][c]=0;
		}
		
		for(int i=0;i<t;i++)
		{
			int u=q[i];
			for(auto v:e[u])
			{
				if(dis[v][c]>dis[u][c]+1)
				{
					dis[v][c]=dis[u][c]+1;
					q[t++]=v;
				}
			}
		}
	}
	for(int i=1;i<n+1;i++)
	{
		sort(dis[i]+1,dis[i]+k+1);
		int val=0;
		for(int j=1;j<s+1;j++) val+=dis[i][j];
		cout<<val<<" ";
	}

}
