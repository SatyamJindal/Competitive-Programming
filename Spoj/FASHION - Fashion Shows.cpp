#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int ans=0;
		int n;
		cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(int i=0;i<n;i++) ans+=(a[i]*b[i]);
		cout<<ans<<"\n";
	}
	
}
