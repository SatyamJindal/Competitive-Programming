#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int> > vi;
		for(int i=0;i<n;i++)
		{
			int st,en;
			cin>>st>>en;
			vi.push_back({en,st});
		}
		sort(vi.begin(),vi.end());
		int ct=1;
		int prev = vi[0].first;
		for(int i=1;i<n;i++)
		{
			if(vi[i].second>=prev)
			{
				ct+=1;
				prev=vi[i].first;
			}
		}
		cout<<ct<<"\n";
	}
}
