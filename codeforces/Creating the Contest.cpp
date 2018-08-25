#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int ct=1,ans=-1;
	for(int i=1;i<n;i++)
	{
		if(a[i]<=2*a[i-1])
		{
			ct+=1;
			ans = max(ans,ct);
		}
		else ct=1;
	}
	ans = max(ans,ct);
	cout<<ans<<"\n";
}
