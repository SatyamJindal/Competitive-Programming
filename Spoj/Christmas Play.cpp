#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		int mi = 1e9;
		
		for(int i=0;i<n-k+1;i++)
		{
			mi = min(mi,a[i+k-1]-a[i]);
		}
		cout<<mi<<"\n";
	}
}
