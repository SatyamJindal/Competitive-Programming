#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;
	cin>>n;
	int ans=0;
	ans+=(n/100);
	n%=100;
	ans+=(n/20);
	n%=20;
	ans+=(n/10);
	n%=10;
	ans+=(n/5);
	n%=5;
	ans+=(n/1);
	cout<<ans<<"\n";
}
