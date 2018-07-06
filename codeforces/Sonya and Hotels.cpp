#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long d;
	cin>>n>>d;
	long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int count=1;
	if(n==1) cout<<2;
	else
	{
		for(int i=0;i<n-1;i++)
		{
			if(a[i]+d<a[i+1]-d) count+=2;
			else if(a[i]+d==a[i+1]-d) count+=1;
		}
		cout<<count+1;
	}
	
	
}
