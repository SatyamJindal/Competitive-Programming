#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,x;
		cin>>n;
		vector<int> d(n+1,1000000);
		for(int i=0;i<n;i++)
		{
			cin>>x;
			*lower_bound(d.begin(),d.end(),x) = x;
		}
		for(int i=0;i<=n;i++)
		{
			if(d[i]==1000000)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
}
