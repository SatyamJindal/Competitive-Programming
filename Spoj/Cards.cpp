#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define M 1000007

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		ll ans=0;
		ans = (((n)*(n+1))%M  + (((n)*(n-1))/2)%M)%M;
		cout<<ans<<"\n";
	}
}
