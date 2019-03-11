#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	set<int> st;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		st.insert(a[i]);
	}
	ll ans=0;
	set<int> s;
	int r=0;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		r=max(r,i);
		while(r<n && s.size()<st.size())
		{
			mp[a[r]]++;
			if(mp[a[r]]==1)
				s.insert(a[r]);
			r+=1;
		}
		if(s.size()==st.size())
			ans+=n-r+1;
		mp[a[i]]--;
		if(mp[a[i]]==0)
			s.erase(a[i]);
	}
	cout<<ans<<"\n";
	
}
