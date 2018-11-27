#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	map<int,int> mp;
	mp[1]=1;
	long long tot=1,i=1;
	while(tot<1e9+8)
	{
		tot+=(i*6);
		i+=1;
		mp[tot]=1;
	}
	int n;
	cin>>n;
	
	while(n!=-1)
	{
		if(mp.find(n)!=mp.end())
			cout<<"Y"<<"\n";
		else
			cout<<"N"<<"\n";
		cin>>n;
	}
}
