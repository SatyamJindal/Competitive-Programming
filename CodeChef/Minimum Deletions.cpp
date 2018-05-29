#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1) cout<<0<<"\n";
		else
		{
			int a1,a2;
			cin>>a1>>a2;
			int gc = __gcd(a1,a2);
			for(int i=2;i<n;i++)
			{
				cin>>a1;
				gc = __gcd(gc,a1);
			}
			if(gc==1) cout<<0<<"\n";
			else cout<<-1<<"\n";
		}
	}
}
