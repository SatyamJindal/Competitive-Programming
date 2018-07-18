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
		cin>>n>>m;
		int ct=0;
		for(int i=0;i<n;i++)
		{
			int u;
			cin>>u;
			if(u%m==0) ct+=1;
		}
		long long ans = pow(2,ct)-1;
		cout<<ans<<"\n";
	}
}
