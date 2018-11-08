#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	for(int I=1;I<=t;I++)
	{
		ll ns;
		int fr;
		cin>>ns>>fr;
		vector<int> val(fr);
		for(int i=0;i<fr;i++) cin>>val[i];
		sort(val.begin(),val.end(),greater<int>());
		int ct=0;
		ll tot=0;
		for(int i=0;i<fr;i++)
		{
			if(tot>=ns) break;
			else
			{
				ct+=1;
				tot+=val[i];
			}
		}
		cout<<"Scenario #"<<I<<":"<<"\n";
		if(ct==fr && tot<ns) cout<<"impossible"<<"\n";
		else cout<<ct<<"\n";
		cout<<"\n";
	}
}
