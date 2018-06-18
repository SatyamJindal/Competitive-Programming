#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	long long arr1[n],arr2[n];
	for(int i=0;i<n;i++) cin>>arr1[i];
	for(int i=0;i<n;i++) cin>>arr2[i];
	
	long long pre1[n+1],pre2[n+1];
	pre1[0]=0;pre2[0]=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			pre1[i] = pre1[i-1]+arr2[i-1];
			pre2[i] = pre2[i-1]+arr1[i-1];
		}
		else
		{
			pre1[i] = pre1[i-1]+arr1[i-1];
			pre2[i] = pre2[i-1]+arr2[i-1];
		}
	}
	for(int i=0;i<q;i++)
	{
		int type,l,r;
		cin>>type>>l>>r;
		if(type==1)
		{
			if(l%2!=0)
			{
				cout<<pre1[r]-pre1[l-1]<<"\n";
			}
			else
			{
				cout<<pre2[r]-pre2[l-1]<<"\n";
			}
		}
		else
		{
			if(l%2==0)
			{
				cout<<pre1[r]-pre1[l-1]<<"\n";
			}
			else
			{
				cout<<pre2[r]-pre2[l-1]<<"\n";
			}
			
		}
	}
	
	
	
}
