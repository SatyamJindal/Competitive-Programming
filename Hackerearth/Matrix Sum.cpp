#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,q;
	cin>>n>>m;
	int a[n][m],sum[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	sum[0][0]=a[0][0];
	for(int i=1;i<m;i++) sum[0][i]=sum[0][i-1]+a[0][i];
	for(int i=1;i<n;i++) sum[i][0]=sum[i-1][0]+a[i][0];
	
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
		}
	}
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int x,y;
		cin>>x>>y;
		cout<<sum[x-1][y-1]<<"\n";
	}
}
