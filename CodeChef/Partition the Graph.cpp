//By  - Satyam_Jindal :)

#include<bits/stdc++.h>
using namespace std;


vector<int> g[10005];
int color1[10005],color2[10005],vis[10005];

//For colouring the graph for k=1
void dfs1(int node)
{
	vis[node]=1;
	for(auto i:g[node])
	{
		if(color1[i]==-1)
			color1[i] = 1 - color1[node];
		if(vis[i]==0)
			dfs1(i);
	}
}

//For colouring the graph for k=2
void dfs2(int node,int &prev)
{
	if(color2[node]!=-1)
		return;
	color2[node]=prev;
	prev = 1-prev;
	for(auto i:g[node])
		dfs2(i,prev);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}

		for(int i=0;i<n+1;i++)
		{
			color1[i]=color2[i]=-1;
			vis[i]=0;
		}
		vector<int> U,V;
		int prev=0;
		color1[1]=0;
		dfs1(1);
		memset(vis,0,sizeof(vis));
		dfs2(1,prev);
		int ct1=0,ct2=0;
		for(int i=1;i<=n;i++)
		{
			if(color1[i]==0)
				ct1+=1;
			else
				ct2+=1;
		}
		//Check if k=1 is possible
		if(ct1==ct2 && (ct1==n/2))
		{
			cout<<1<<"\n";
			for(int i=1;i<=n;i++)
			{
				if(color1[i]==0)
					U.push_back(i);
				else
					V.push_back(i);
			}
		}
		else
		{
			cout<<2<<"\n";
			for(int i=1;i<=n;i++)
			{
				if(color2[i]==0)
					U.push_back(i);
				else
					V.push_back(i);
			}
		}
		for(auto i:U)
			cout<<i<<" ";
		cout<<"\n";
		for(auto i:V)
			cout<<i<<" ";
		cout<<"\n";
		for(int i=0;i<10005;i++)
			g[i].clear();
		prev=0;
	}
}
