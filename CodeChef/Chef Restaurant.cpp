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
		cin>>n>>m;
		pair<int,int> p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].second>>p[i].first;
		}
		sort(p,p+n);
		for(int i=0;i<m;i++)
		{
			int num;
			cin>>num;
			int pos = upper_bound(p,p+n,pair<int,int>{num,num})-p;
			if(pos>=n) cout<<-1<<"\n";
			else
			{
				cout<<max(p[pos].second-num,0)<<"\n";
			}
		}
	}
}

 
