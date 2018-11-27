#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
	ios_base::sync_with_stdio(false);
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		ll i=1,j=1000000001,ans=0,l=0;
		while(i<=j)
		{
			ll mid = (i+j)/2;
			int curr=a[0],tot=1;
			for(int i=1;i<n;i++)
			{
				if(a[i]-curr>=mid)
					tot++,curr=a[i];
			}
			
			if(tot<c)
				j=mid-1;
			else
			{
				ans = mid;
				i=mid+1;
			}
		}
		cout<<ans<<"\n";
	}
} 
