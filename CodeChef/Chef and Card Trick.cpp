#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int ct=0;
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		bool already=false;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1]) 
			{
				already=true; break;
			}
		}
		if(!already) cout<<"YES"<<"\n";
		else
		{
		
			for(int i=0;i<n-1;i++)
			{
				if(a[i]>a[i+1]) ct+=1;
			}
			//cout<<"ct "<<ct<<"\n";
			if(ct==1 && (a[0]>=a[n-1])) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
}
