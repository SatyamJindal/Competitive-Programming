#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	int num=n;
	map<int,int> mp;
	for(int i=2;i*i<=n;i++)
	{
		if(num%i==0)
		{
			while(num%i==0)
			{
				mp[i]+=1;
				num/=i;	
			}	
		}	
	}
	if(num>1)
		mp[num]+=1;
	int mx=-1;
	for(auto i:mp) mx = max(mx,i.second);
	double next = log(mx)/log(2.0);
	int val = pow(2,ceil(next));
	int op=0,ans=1;
	for(auto i:mp)
	{
		ans*=i.first;
		if(i.second!=val) op=1;	
	}	
	op+=ceil(next);
	if(n==1) cout<<1<<" "<<0;
	else
		cout<<ans<<" "<<op;
	
}
