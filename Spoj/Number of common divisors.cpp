#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int val = __gcd(a,b);
		int ans=0;
		for(int i=1;i*i<=val;i++)
		{
			if(val%i==0)
			{
				if(i*i==val)
					ans+=1;
				else
					ans+=2;
			}
		}
		cout<<ans<<"\n";
	}
}
