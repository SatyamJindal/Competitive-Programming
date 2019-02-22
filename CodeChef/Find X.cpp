#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		ll pre[n+1];
		memset(pre,0,sizeof(pre));
		for(int i=1;i<=n;i++)
			pre[i] = (pre[i-1]^a[i-1]);
		while(q--)
		{
			ll ans=0;
			int l,r;
			cin>>l>>r;
			ll val = (pre[r]^pre[l-1]);
			for(ll i=0;i<=30;i++)
			{
				if((val&1)==0)
					ans+=(1LL<<i);
				val>>=1;
			}
			cout<<ans<<"\n";
			
		}
	}
}
