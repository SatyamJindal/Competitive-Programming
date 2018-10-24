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
		int ans=0;
		for(int i=5;n/i>0;i*=5)
		{
			ans+=(n/i);
		}
		cout<<ans<<"\n";
	}
}
