#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,tot=0;
		cin>>n;
		int row[n][n],col[n][n];
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		vector<string> vi;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			vi.push_back(s);
		}
		for(int i=n-1;i>-1;i--)
		{
			for(int j=n-1;j>-1;j--)
			{
				if(j==n-1 && vi[i][j]=='.')
					row[i][j]=1;
				else
				{
					if(vi[i][j]=='.' && row[i][j+1]==1)
						row[i][j]=1;
				}
			}
		}
		for(int j=n-1;j>-1;j--)
		{
			for(int i=n-1;i>-1;i--)
			{
				if(i==n-1 && vi[i][j]=='.')
					col[i][j]=1;
				else
				{
					if(vi[i][j]=='.' && col[i+1][j]==1)
						col[i][j]=1;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(row[i][j] && col[i][j])
					tot+=1;
			}
		}
		cout<<tot<<"\n";
		
	}
}
