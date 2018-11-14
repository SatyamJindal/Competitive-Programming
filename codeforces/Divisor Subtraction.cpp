#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

ll factor(ll n)
{
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return i;	
	}	
	return n;
}


int main()
{
	ll n;
	cin>>n;
	ll ct=0;
	if(n%2!=0)
	{
		n-=factor(n);
		ct+=1;
	}
	cout<<(ct+(n/2))<<"\n";
}
