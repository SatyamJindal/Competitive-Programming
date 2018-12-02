#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	ll m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll ans=-1,tot=a[0];
	int l=0,r=0;
	
	while(r<n)
	{
		if(tot<=m)
		{
			ans = max(ans,tot);
			r++;
			tot+=a[r];
		}
		else
		{
			l++;
			tot-=a[l-1];
		}
	}
	cout<<ans<<"\n";
}
