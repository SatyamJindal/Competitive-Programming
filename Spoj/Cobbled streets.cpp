#include<bits/stdc++.h>
using namespace std;

#define ll long long

int par[1005],t,n,m;

pair<int,pair<int,int> > pi[300005];
ll p;

int find(int x)
{
	return par[x]= (par[x]==x)? x:find(par[x]);
}

int unite(int x,int y)
{
	if(find(x)<find(y))
		par[find(y)]=find(x);
	else
		par[find(x)]=find(y);
}

ll kruskal()
{
	ll res=0;
	for(int i=0;i<m;i++)
	{
		int x = pi[i].second.first;
		int y = pi[i].second.second;
		int w = pi[i].first;
		if(find(x)!=find(y))
		{
			unite(x,y);
			res+=w;
		}
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>t;
	
	while(t--)
	{
		cin>>p;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			par[i]=i;
		for(int i=0;i<m;i++)
		{
			int a,b,le;
			cin>>a>>b>>le;
			pi[i] = {le,{a,b}};
		}
		sort(pi,pi+m);
		cout<<kruskal()*p<<"\n";
	}
}
