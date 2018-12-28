#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll min1(ll a,ll b,ll c)
{
	return min(a,min(b,c));
}

ll min2(ll a,ll b,ll c,ll d)
{
	return min(min(a,b),min(c,b));
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int k=0;
	while(n!=0)
	{
		k+=1;
		ll a[n][3],ans[n][3];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
		}
		memset(ans,0,sizeof(ans));
		ans[0][1]=a[0][1]; ans[0][2] = a[0][1]+a[0][2];
		ans[1][0] = a[0][1] + a[1][0];
		ans[1][1] = a[1][1] + min1(ans[1][0],ans[0][1],ans[0][2]);
		ans[1][2] = a[1][2] + min1(ans[1][1],ans[0][2],ans[0][1]);
		for(int i=2;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(j==0)
					ans[i][j] = a[i][j] + min(ans[i-1][j],ans[i-1][j+1]);
				else if(j==1)
					ans[i][j] = a[i][j] + min(min(ans[i][j-1],ans[i-1][j-1]),min(ans[i-1][j],ans[i-1][j+1]));
				else if(j==2)
					ans[i][j] = a[i][j] + min(ans[i][j-1],min(ans[i-1][j-1],ans[i-1][j]));
			}
		}
		
		cout<<k<<". "<<ans[n-1][1]<<"\n";
		cin>>n;
		
	}
}
