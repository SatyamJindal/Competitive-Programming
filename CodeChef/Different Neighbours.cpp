//By - Satyam_jindal :)

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	int ans[n][m];
	memset(ans,0,sizeof(ans));
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	if(n==1)
	{
		int cur=1;
		for(int j=0;j<m;j++)
		{
			ans[0][j]=cur;
			if(j%2!=0)
			{
				if((cur%2)==0)
					cur=1;
				else
					cur=2;
			}
		}
	}
	else if(m==1)
	{
		int cur=1;
		for(int i=0;i<n;i++)
		{
			ans[i][0]=cur;
			if(i%2!=0)
			{
				if((cur%2==0))
					cur=1;
				else
					cur=2;
			}
		}
	}
	else if(n==2)
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<m;j++)
			{
				int val = (j+1)%3;
				if(val==2)
					ans[i][j]=2;
				else if(val==0)
					ans[i][j]=3;
				else
					ans[i][j]=1;
			}
		}
	}
	else if(m==2)
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<n;j++)
			{
				int val = (j+1)%3;
				if(val==2)
					ans[j][i]=2;
				else if(val==0)
					ans[j][i]=3;
				else
					ans[j][i]=1;
				
			}
		}
	}
	else
	{
		int cur=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((cur&1)==0)
				{
					int val = (j+1)%4;
					if(val==0)
						ans[i][j]=4;
					else
						ans[i][j]=val;
				}
				else
				{
					int val = (j+1)%4;
					if(val==0)
						ans[i][j]=2;
					else if(val==2)
						ans[i][j]=4;
					else if(val==3)
						ans[i][j]=1;
					else
						ans[i][j]=3;
				}
			}
			if(i%2!=0)
				cur+=1;
		}
	}
	int ma=-1;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			ma = max(ma,ans[i][j]);
	cout<<ma<<"\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		solve();
	}
}
