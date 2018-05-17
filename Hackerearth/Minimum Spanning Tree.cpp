#include<bits/stdc++.h>
using namespace std;

int par[100005]={0};
pair<int, pair<int,int> > edges[100001];
int n,m;

int find(int x)
{
	return par[x]=(par[x]==x)?x:find(par[x]);
}


int unite(int x , int y)
{
	int p = find(x);
	int q = find(y);
	
	if(p<q) par[q]=par[p];
	else par[p]=par[q];
}

int kruskal()
{
	int res=0;
	for(int i=0;i<m;i++)
	{
		int x = edges[i].second.first;
		int y = edges[i].second.second;
		int wt = edges[i].first;
		if(find(x)!=find(y))
		{
			res+=wt;
			unite(x,y);
		}
	}
	return res;
}

int main()
{
	
	//int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) par[i]=i;
	for(int i=0;i<m;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		edges[i] = {w, {x,y}};
	}
	sort(edges,edges+m);
	int ans = kruskal();
	cout<<ans;
}
