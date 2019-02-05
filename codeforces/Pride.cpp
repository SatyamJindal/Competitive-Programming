#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,d=0,ct=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	
		cin>>a[i] , d = __gcd(d,a[i]);
		if(a[i]==1)
			ct+=1;
	}
	if(d>1)
		cout<<-1;
	else if(ct>0)
		cout<<n-ct;
	else
	{
		int ans=1000000007;
		for(int i=0;i<n;i++)
		{
			int curr=0;
			for(int j=i;j<n;j++)
			{
				curr=__gcd(curr,a[j]);
				if(curr==1)
				{
					ans = min(ans,j-i+n-1);
					break;
				}
			}
		}
		cout<<ans;
	}
	
}
