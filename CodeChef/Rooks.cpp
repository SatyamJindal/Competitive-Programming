#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		vector<pair<int,int> > vi;
		vector<int> row,col;
		int n,k;
		cin>>n>>k;
		int r[n+1],c[n+1];
		memset(r,0,sizeof(r));
		memset(c,0,sizeof(c));
		while(k--)
		{
			int a,b;
			cin>>a>>b;
			r[a]=1,c[b]=1;
		}
		int rz=0,cz=0;
		for(int i=1;i<=n;i++)
		{
			if(r[i]==0)
				row.push_back(i);
			if(c[i]==0)
				col.push_back(i);
		}
		cout<<min(row.size(),col.size())<<" ";
		for(int i=0;i<min(row.size(),col.size());i++)
			cout<<row[i]<<" "<<col[i]<<" ";
		cout<<"\n";
		
	}
}
