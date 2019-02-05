#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,o=0,t=0,x,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
			o+=1;
		else
			t+=1;
	}
	if(o>=t)
	{
		ans+=t,o-=t;
	}
	else
	{
		ans+=o,o=0;
	}
	ans+=(o/3);
	cout<<ans;
}
