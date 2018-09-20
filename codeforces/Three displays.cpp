#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int s[n],c[n];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) cin>>c[i];
	vector<int> greater[n];  //left--> cost
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[j]>s[i]) greater[i].push_back(c[j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		sort(greater[i].begin(),greater[i].end());
	}
	
	int ans=1e9;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[j]>s[i] && greater[j].size()>0)
			{
				ans = min(ans,c[i]+c[j]+greater[j][0]);
			}
		}
	}
	if(ans==1e9) cout<<-1;
	else cout<<ans;
}
