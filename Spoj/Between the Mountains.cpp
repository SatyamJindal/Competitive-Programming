#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>m;
		int b[m];
		for(int i=0;i<m;i++)
			cin>>b[i];
		sort(b,b+m);
		int ans=1e9;
		for(int i=0;i<n;i++)
		{
			int ind = lower_bound(b,b+m,a[i]) - b;
			for(int j=max(0,ind-3);j<min(m,ind+4);j++)
				ans = min(ans,abs(a[i]-b[j]));
		}
		cout<<ans<<"\n";
	}
}
