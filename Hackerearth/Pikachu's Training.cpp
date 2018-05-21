#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int maxi=a[0];
		for(int i=0;i<n;i++)
		{
			if(a[i]-a[i-1]>maxi) maxi=a[i]-a[i-1];
		}
		cout<<maxi<<"\n";
	}
}
