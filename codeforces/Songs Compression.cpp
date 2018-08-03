#include<bits/stdc++.h>
using namespace std;


pair<long long,long long> a[100005];

bool cmp(pair<long long,long long> u,pair<long long,long long> v)
{
	return (u.first-u.second) > (v.first-v.second);
}

int main()
{
	long long n,m;
	cin>>n>>m;
	long long sum=0,sum2=0;
	for(long long i=0;i<n;i++)
	{
		cin>>a[i].first>>a[i].second;
		sum+=a[i].first;
		sum2+=a[i].second;
	}
	if(sum<=m){
	 cout<<0<<"\n";
		return 0;
	}
	
		if(sum2>m){
		 cout<<-1<<"\n";
		return 0;
	}
	
	sort(a,a+n,cmp);

	long long ct=0;
	
	for(int i=0;i<n;i++)
	{
		sum -= a[i].first;
		sum += a[i].second;
		ct ++;
		if(sum<=m)break;
	}
	cout<<ct<<"\n";
}
