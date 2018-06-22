#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int le=0,re=n-1;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	while(le<=re)
	{
		if(a[le]<=k) le+=1;
		else if(a[re]<=k) re-=1;
		else break;
	}
	cout<<n-(re-le+1)<<"\n";
}
