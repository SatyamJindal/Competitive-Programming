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
		long long count=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int ini=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1]) ini+=1;
			else
			{
				if(ini>1) count+=((ini)*(ini-1))/2;
				ini=1;
			}
		}
		if(ini>1) count+=((ini)*(ini-1))/2;
		cout<<2*count<<"\n";
	}
}
