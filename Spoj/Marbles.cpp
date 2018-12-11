#include<bits/stdc++.h>
using namespace std;


long long ans(int n,int m)
{
	if(m>n-m) m=n-m;
	long long ans=1;
	for(int i=0;i<m;i++) ans = ans*(n-i)/(i+1);
	
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,k;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>k;
		cout<<ans(n-1,k-1)<<"\n";
	}
}
