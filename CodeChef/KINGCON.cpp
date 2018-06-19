#include<bits/stdc++.h>
using namespace std;


void dfs(int node,int c,int parent[],int child[],int low[],int tim[],bool vis[],bool is_cut[],vector<int> g[])
{
	vis[node]=true;
	low[node] = tim[node] = c++;
	
	for(int i=0;i<g[node].size();i++)
	{
		int curr = g[node][i];
		if(curr==parent[node]) continue;
		
		if(!vis[curr])
		{
			child[node]+=1;
			parent[curr] = node;
			dfs(curr,c,parent,child,low,tim,vis,is_cut,g);
			
			low[node] = min(low[node],low[curr]);
			
			if(low[curr]>=tim[node])
			{
				is_cut[node]=true;
			}
		}
		else
		{
			low[node] = min(low[node],tim[curr]);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;
		int c=0;
		int n,m,k;
		cin>>n>>m>>k;
		int parent[n],child[n],low[n],tim[n];
		bool vis[n],is_cut[n];
		for(int i=0;i<n;i++)
		{
			parent[i]=0; child[i]=0; low[i]=0;tim[i]=0;
			vis[i]=is_cut[i]=false;
		}
		
		vector<int> g[n+1];
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		parent[0]=-1;
		
		dfs(0,c,parent,child,low,tim,vis,is_cut,g);
		
		is_cut[0] = child[0]>1?true:false;
		//for(int i=0;i<n;i++) cout<<child[i]<<" ";
		//cout<<"\n";
		for(int i=0;i<n;i++)
		{
			if(is_cut[i])
			{
				count+=1;
			}
		}
		cout<<count*k<<"\n";
		
	}
}
