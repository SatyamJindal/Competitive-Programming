#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int hash[200005];
	memset(hash,0,sizeof(hash));
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		hash[a[i]]+=1;
	}
	int count=0;
	for(int i=0;i<n;i++)
		if(hash[a[i]]&& hash[(a[i]+d)] && hash[a[i]+2*d]) count+=1;
	cout<<count<<'\n';
	
	
}
