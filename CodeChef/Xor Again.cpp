#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long x,ans;
		cin>>x;
		ans=2*x;
		for(int i=0;i<n-1;i++)
		{
			cin>>x;
			ans^=(2*x);
		}
		cout<<ans<<"\n";
	}
}
