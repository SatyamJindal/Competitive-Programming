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
		double ans=0;
		cin>>n;
		map<string,double> mp;
		int curr=-1;
		for(int i=0;i<n;i++)
		{
			double tot=0.2;
			string s;
			cin>>s;
			if(mp.find(s)!=mp.end())
			{
				ans+=mp[s]/2;
				continue;
			}
			if(s[0]=='d' || s[0]=='f') curr=0;
			else curr=1;
			for(int i=1;i<s.size();i++)
			{
				if(curr==0 && (s[i]=='f' || s[i]=='d')) tot+=0.4;
				else if(curr==1 && (s[i]=='j' || s[i]=='k')) tot+=0.4;
				else if(curr==0 && (s[i]=='j' || s[i]=='k'))
				{
					tot+=0.2; curr=1;
				}
				else if(curr==1 && (s[i]=='f' || s[i]=='d'))
				{
					tot+=0.2; curr=0;
				}
			}
			ans+=tot;
			mp[s]=tot;
		}
		cout<<ans*10<<"\n";
	}
}
