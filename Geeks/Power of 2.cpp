#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int ct=0;
		while(n)
		{
		    if(n&1) ct+=1;
		    n>>=1;
		}
		if(ct==1) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}
