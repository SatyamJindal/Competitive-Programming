#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for(int i=m;i<=n;i++)
		{
			if(i==1) continue;
			bool prime = true;
			for(int j=2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					prime=false;
					break;
				}
			}
			if(prime) cout<<i<<"\n";
		}
		cout<<"\n";
	}
}
