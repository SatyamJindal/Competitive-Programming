#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pl pair<ll,ll>

ll l,r,x,y;



int main()
{
	int count=0;
	ios_base::sync_with_stdio(false);
	cin>>l>>r>>x>>y;
	if(y%x!=0) cout<<0;
	else
	{
		int n = y/x;
		for(int d=1;d*d<=n;d++)
		{
			if(n%d==0)
			{
				int c = n/d;
				if(l<=c*x && c*x<=r && l<=d*x && d*x<=r && __gcd(c,d)==1)
				{
					if(d*d==n) count+=1;
					else count+=2;
				}
			}
		}
		cout<<count;
	}
}
