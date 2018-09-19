#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,s,p;
	cin>>k>>n>>s>>p;
	int y = (n+s-1)/s*k;
	int ans = (y+p-1)/p;
	cout<<ans<<"\n";
}
