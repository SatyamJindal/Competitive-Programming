#include<bits/stdc++.h>
using namespace std;


const int M = 1e6+6;

vector<int> g[M];

int parent[M];
int child[M];
int low[M];
int tim[M];
bool seen[M];
bool is_cut[M];

vector<pair<int,int> > bridges;
vector<int> points;
void dfs(int s,int c)
{
	seen[s]=true;
	low[s] = tim[s] = c++;
	
	for(int i=0;i<g[s].size();i++)
	{
		int curr = g[s][i];
		if(curr==parent[s]) continue;
		
		if(!seen[curr])
		{
			child[s]+=1;
			parent[curr]=s;
			dfs(curr,c);
			
			
			low[s] = min(low[s],low[curr]);
			
			if(low[curr]>=tim[s])
			{
				is_cut[s]=true;
				if(low[curr]>tim[s]) bridges.push_back({s,curr});
			}
		}
		else
		{
			low[s] = min(low[s],tim[curr]);
		}
	}
}

bool comp(pair<int,int> a,pair<int,int> b)
{
	if(a.first<b.first) return (a.first<b.first);
	else if(a.first==b.first) return (b.first<=b.second);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int c=0;
	int ta=0,tb=0;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	parent[1]=-1;
	dfs(0,c);
	is_cut[0] = child[0]>1?true:false;
	
	for(int i=0;i<n;i++)
	{
		if(is_cut[i])  points.push_back(i);
	}
	cout<<points.size()<<"\n";
	sort(points.begin(),points.end());
	for(int i=0;i<points.size();i++) cout<<points[i]<<" ";
	cout<<"\n";
	cout<<bridges.size()<<"\n";
	sort(bridges.begin(),bridges.end(),comp);
	for(int i=0;i<bridges.size();i++)
	{
		cout<<bridges[i].first<<" "<<bridges[i].second<<"\n";
	}
	
}
