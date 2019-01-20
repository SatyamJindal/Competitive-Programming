#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<pair<int,int> > vi;
	set<pair<int,int> > st;
	for(int i=0;i<2*m;i++)
	{
		int u,v;
		cin>>u>>v;
		vi.push_back({u,v});
		st.insert({u,v});
	}
	int cost[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			
			{
				cin>>cost[i][j];
			}
	}
	int sta=1,en=1;
	vector<pair<int,int> > ans;
	bool cur=false,right=true;
	while(1)
	{
		if(st.find({sta,en})!=st.end())
		{
			if(ans.size()==0)
			{
				cur=true;
				ans.push_back({sta,en});
			}
			else
			{
				ans.push_back({sta,en});
				cout<<ans.size()<<" ";
				for(auto i:ans)
					cout<<i.first<<" "<<i.second<<" ";
				cout<<"\n";
				ans.clear();
				cur=false;
			}
		}
		else
		{
			if(cur)
				ans.push_back({sta,en});
		}
		if(right)
			en+=1;
		else
			en-=1;
		if(en==n+1)
		{
			en=n;
			sta+=1;
			right=false;
		}
		if(en==0)
		{
			en=1;
			sta+=1;
			right=true;
		}
		if(sta==n+1)
			break;
		
	}
	
	
}
