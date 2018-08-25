#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k,v=0,x;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x==0) continue;
			if(i%2==0)
			{
				if(v<0) --v;
				else ++v;
			}
			else
			{
				if(v>0) --v;
				else ++v;
			}
		}
		if(abs(v)>=k) cout<<1<<"\n";
		else cout<<2<<"\n";
		
	}
}
