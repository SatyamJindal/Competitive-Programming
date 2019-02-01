#include<bits/stdc++.h>
using namespace std;

vector<int> g[100005];
set<int> st;
vector<int> ans;
bool vis[100005];

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	st.insert(1);
	while(!st.empty())
	{
		int top = *st.begin();
		ans.push_back(top);
		vis[top]=true;
		st.erase(top);
		for(auto i: g[top])
		{
			if(!vis[i])
				st.insert(i);
		}
	}
	for(int j:ans)
		cout<<j<<" ";
}
