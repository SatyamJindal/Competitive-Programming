#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	
	while(n--)
	{
		int x,y,ans=0;
		cin>>x>>y;
		if(x!=y && y+2!=x) ans=-1;
		else if(x==0 && y==0) ans=0;
		else if(x==1 && y==1) ans=1;
		else
		{
			if(x%2==0)
			{
				if(y==x) ans=(x/2)*4;
				else ans=(x/2)*4 - 2;
			}
			else
			{
				if(y==x) ans=((x-1)/2)*4 + 1;
				else ans=((x-1)/2)*4 - 1;
			}
		}
		if(ans>=0) cout<<ans<<"\n";
		else cout<<"No Number"<<"\n";
	}
}
