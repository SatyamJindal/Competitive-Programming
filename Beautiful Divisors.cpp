#include<bits/stdc++.h>
using namespace std;

int n;


int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	int ans=0;
	for(int k=1;k<12;k++)
	{
		int t = ((1<<k)-1)*(1<<(k-1));
		if(n%t==0) ans=t;
	}
	cout<<ans;
}
