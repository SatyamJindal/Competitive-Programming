#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	string s;
	cin>>s;
	multiset<long long> mt;
	mt.insert(a[0]);
	long long ans=0;
	for(int i=1;i<s.size();i++)
	{
		if(s[i]==s[i-1])
			mt.insert(a[i]);
		else
		{
			long long sz = mt.size();
			for(int i=0;i<min(sz,k);i++)
			{
				ans+= (*(--mt.end()));
				mt.erase(--mt.end());
			}
			mt.clear();
			mt.insert(a[i]);
		}
		//cout<<"ans "<<ans<<"\n";
		
	}
	long long sz = mt.size();
	for(int i=0;i<min(sz,k);i++)
	{
		ans+= (*(--mt.end()));
		mt.erase(--mt.end());
	}
	cout<<ans<<"\n";
		
	}
