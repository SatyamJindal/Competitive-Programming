#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m;
		string s;
		cin>>n>>m;
		vector<string> arr;
		int row[n],col[m];
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		bool one = false;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			arr.push_back(s);
			for(int j=0;j<m;j++)
			{
				row[i] |= s[j]-'0';
				col[j] |= s[j]-'0';
				if(s[j]-'0'==1) one=true;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(!one) cout<<-1<<" ";
				else if(arr[i][j]-'0'==1) cout<<0<<" ";
				else
				{
					if(row[i]==1 || col[j]==1) cout<<1<<" ";
					else cout<<2<<" ";
				}
			}
			cout<<"\n";
		}
	}
}
