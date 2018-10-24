#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n!=-1)
	{
		int sum=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		int avg = sum/n,ct=0;
		if(sum%n) ct=-1;
		else
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]>avg) ct+=(a[i]-avg);
			}
		}
		cout<<ct<<"\n";
		cin>>n;
	}
}
