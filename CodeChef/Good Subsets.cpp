#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int f=0;
		for(int i=0;i<n-1;i++)
		{
			if(__gcd(a[i],a[i+1])==1 && a[i]!=a[i+1])
			{
				f=1;
				break;
			}
		}
		if(f) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}
