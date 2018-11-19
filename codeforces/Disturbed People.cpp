#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(int i=1;i<n-1;i++)
	{
		if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
		{
			a[i+1]=0;
			ans+=1;
		}
	}
	cout<<ans;
}
