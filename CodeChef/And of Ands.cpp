#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int x;
		cin>>x;
		for(int i=1;i<n;i++)
		{
			int val;
			cin>>val;
			x = (x&val);
		}
		if(__gcd(x,1000000007)==1)
		{
			cout<<x<<"\n";
		}
		else
		{
			cout<<-1<<"\n";
		}
	}
}
