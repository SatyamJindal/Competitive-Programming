#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	pair<int,int> obe[n],clu[n];
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		obe[i]={x,y};
	}
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		clu[i]={x,y};
	}
	map<pair<int,int>, int> mp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			mp[{clu[i].first+obe[j].first,clu[i].second+obe[j].second}]++;
		}
	}
	for(auto i:mp)
	{
		if(i.second==n)
		{
			cout<<i.first.first<<" "<<i.first.second<<"\n";
		}
	}
}
