#include<bits/stdc++.h>
using namespace std;


int prime[105];

void pr()
{
	prime[2]=1;prime[3]=1;
	for(int i=5;i<105;i++)
	{
		int f=0;
		for(int j=2;j*j<i+1;j++)
		{
			if(i%j==0)
			{
				f=1; break;
			}
		}
		if(f==0) prime[i]=1;
	}
}

int main()
{
	pr();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1) f=1;
		}
		if(f==0) cout<<-1<<"\n";
		else
		{
			int f=0;
			sort(a,a+n);
			for(int i=0;i<n;i++)
			{
				if(prime[a[i]])
				{
					cout<<a[i]<<"\n";
					f=1;
					break;
				}
			}
			if(f==0) cout<<-1<<"\n";
		}
	}
}
