#include<bits/stdc++.h>
using namespace std;

int prime[300];

void pri()
{
	prime[0]=1;prime[1]=1;
	int start=2;
	while(start*start<400)
	{
		if(prime[start]==0)
		{
			for(int i=start*2;i<300;i+=start)
			{
				prime[i]=1;
			}
		}
		start+=1;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	memset(prime,0,sizeof(prime));
	pri();
	vector<int> primes;
	for(int i=0;i<300;i++)
	{
		if(!prime[i]) primes.push_back(i);
	}
	map<int,int> semi;
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			semi[primes[i]*primes[j]] = 1;
		}
	}
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		bool gotit = false;
		for(auto i: semi)
		{
			if(semi.find(n-i.first)!=semi.end())
			{
				cout<<"YES"<<"\n";
				gotit=true;
				break;
			}
		}
		if(!gotit) cout<<"NO"<<"\n";
	}
}
