#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
	ll num,ct=0;
	cin>>num;
	map<ll,int> mp;
	bool cycle=false;
	while(1)
	{
		ll sum=0,p=num;
		while(p)
		{
			sum+=(p%10)*(p%10);
			p/=10;
		}
		num=sum;
		if(num==1) 
		{
			ct++;
			break;
		}
		if(mp.find(num)==mp.end())
			mp[num]++,ct++;
		else
		{
			cycle=true;
			break;
		}
		
		
	}
	if(!cycle)
		cout<<ct<<"\n";
	else
		cout<<-1<<"\n";
} 
