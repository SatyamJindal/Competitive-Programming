#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<string> a(n);
	vector<int> cnt(m);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='1') ++cnt[j];
		}
	}
	for(int i=0;i<n;i++)
	{
		bool poss=true;
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='1' && cnt[j]==1)
			{
				poss = false;
			}
		}
		if(poss)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	
	
}
