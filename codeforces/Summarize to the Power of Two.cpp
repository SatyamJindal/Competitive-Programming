#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<ll> a(n);
	multiset<ll> st;
	for(int i=0;i<n;i++)
	{
		ll x; cin>>x; 
		st.insert(x);
		a[i]=x;
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		st.erase(st.find(a[i]));
		bool k=false;
		for(int j=0;j<32;j++)
		{
			ll no = (1LL<<j);
			if(st.count(no-a[i])>=1) k=true;
		}
		if(!k) ans++;
		st.insert(a[i]);
	}
	cout<<ans;
}
