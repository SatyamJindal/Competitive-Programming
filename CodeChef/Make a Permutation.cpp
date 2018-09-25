#include<bits/stdc++.h>
using namespace std;

typedef long l;
long x;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,ans=0;
		cin>>n;
		vector<l> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[i] = x;	
		}
		map<l,int> v;
		for(int i=0;i<n;i++)
		{
			if(a[i]>n) ans+=1;
			else v[a[i]]++;	
		}
		for(auto val:v) ans+=val.second-1;
		cout<<ans<<"\n";		
	}
}
