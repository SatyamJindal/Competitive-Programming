#include<bits/stdc++.h>
using namespace std;

bool isprime[100005];
vector<int> primes;
vector<int> g[200005];
int t;
bool vis[100005];



void sieve()
{
	int start=2;
	while(start*start<=100005)
	{
		if(isprime[start]==0){
			for(int i=start*start;i<=100005;i+=start)
				isprime[i]=1;
		}
		start++;
	}
	for(int i=1000;i<=9999;i++)
	{
		if(isprime[i]==0)
			primes.push_back(i);
	}
}

void build()
{
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			int num1=primes[j],num2=primes[i],ct=0;
			while(num1 && num2)
			{
				if(num1%10!=num2%10)
					ct+=1;
				num1/=10, num2/=10;
			}
			if(ct==1)
			{
				g[primes[i]].push_back(primes[j]);
				g[primes[j]].push_back(primes[i]);
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	isprime[0]=1,isprime[1]=1;
	sieve();
	build();
	cin>>t;
	//cout<<"yes";
	while(t--)
	{
		int u,v;
		cin>>u>>v;
		map<int,int> mp,vis;
		for(int i=1000;i<10000;i++)
			vis[i]=0;
		mp[u]=0;
		vis[u]=1;
		queue<int> qu;
		qu.push(u);
		while(!qu.empty())
		{
			int top = qu.front();
			qu.pop();
			for(auto v:g[top])
			{
				if(vis[v]==0)
				{
					vis[v]=1;
					mp[v] = mp[top]+1;
					qu.push(v);	
				}
			}
		}
		if(mp.find(v)==mp.end())
			cout<<"Impossible"<<"\n";
		else
			cout<<mp[v]<<"\n";
	}
	
}
