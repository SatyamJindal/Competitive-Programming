#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++) cin>>a[i];
	sort(a,a+m);
	vector<int> ct;
	int count=1;
	for(int i=1;i<m;i++)
	{
		if(a[i]==a[i-1]) count+=1;
		else
		{
			ct.push_back(count);
			count=1;
		}
	}
	ct.push_back(count);
	int max_days=1,flag=0;
	while(1)
	{
		int st=0;
		for(int i=0;i<ct.size();i++)
		{
			st+=ct[i]/max_days;
		}
		if(st>=n) flag=1;
		if(st<n) break;
		max_days+=1;
	}
	if(flag==0) cout<<0;
	else cout<<max_days-1;
}
