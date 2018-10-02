#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	ll a,b;
	cin>>a>>b;
	cout<<"YES"<<"\n";
	for(ll i=a;i<b+1;i+=2)
	{
		cout<<i<<" "<<i+1<<"\n";
	}	
}
