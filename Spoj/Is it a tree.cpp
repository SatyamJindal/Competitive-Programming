#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > a(100005);
vector<int> visited(100001,0);
int flag=0;
int dfs(int node,int par)
{
	if(visited[node]==1) return 0;
	else
	{
		visited[node]=1;
		for(int i=0;i<a[node].size();i++)
		{
			if(visited[a[node][i]]==1 && a[node][i]!=par)
			{
				//cout<<"cycle"<<i<<" node "<<node<<endl;
				flag=1;
				break;
			}
			if(a[node][i]!=par)
			{
			//cout<<"ele "<<a[node][i]<<endl;
			dfs(a[node][i],node);
			if(flag==1) return 0;
			}
		}
		
		//if(flag==0) return 0;
	}
	return 100;
		
}


int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	//int flag=0;
	if(dfs(1,1)==100)
	{
		int f=0;
		for(int i=1;i<=n;i++)
		{
			if(visited[i]!=1)
			{
				f=1;
				break;
			}
		}
		if(f==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	 
	else cout<<"NO"<<endl;
}
