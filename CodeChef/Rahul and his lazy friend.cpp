#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		long long val = __gcd(a,b);
		//cout<<val;
		cout<<(a*b)/val<<"\n";
	}
}
