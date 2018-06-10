#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long a,b;
		cin>>a>>b;
		cout<<2*__gcd(a,b)<<"\n";
	}
}
