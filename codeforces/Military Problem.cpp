#include<bits/stdc++.h>
using namespace std;

vector<int> g[200005];
vector<int> arr;
bool vis[200005];

void dfs(int node,long long count[])
{
	arr.push_back(node);
	count[node]=1;
	vis[node]=true;
	for(auto i:g[node])
	{
		if(!vis[i])
		{
			dfs(i,count);
			count[node]+=count[i];
		}
	}
	
}

int main()
{
	
	ios_base::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	int a[n];
	long long count[n+1];
	memset(count,0,sizeof(count));
	for(int i=0;i<n-1;i++)
		cin>>a[i];
	int curr=0;
	for(int i=2;i<n+1;i++)
	{
		g[a[curr]].push_back(i);
		g[i].push_back(a[curr]);
		curr++;
	}
	for(auto i:g)
		sort(i.begin(),i.end());
	dfs(1,count);
	map<int,int> mp;
	for(int i=0;i<arr.size();i++)
		mp[arr[i]]=i;
	while(q--)
	{
		int u,k;
		cin>>u>>k;
		if(k>count[u])
			cout<<-1<<"\n";
		else
			cout<<arr[mp[u]+k-1]<<"\n";
	}
	
}
