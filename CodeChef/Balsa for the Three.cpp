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
		ll n;
		cin>>n;
		ll ans;
		while(1)
		{
			n++;
			ll v=n;
			ll ct=0;
			while(v)
			{
				if(v%10==3) ct+=1;
				v/=10;
			}
			if(ct>=3)
			{
				ans=n;
				break;
			}
		}
		cout<<ans<<"\n";
	}
}
