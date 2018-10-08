#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<n*(n+1)*(2*n+1)/6<<"\n";
	}
	
}
