#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		map<int,int> mp;
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			++mp[a[i]];
		}
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(mp[x-a[i]]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag) cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
	}
}
