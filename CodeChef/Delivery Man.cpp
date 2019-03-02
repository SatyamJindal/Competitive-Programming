#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
	return (abs(a.first-a.second)>abs(b.first-b.second));
}


int main()
{
	long long ans=0;
	int n,x,y;
	cin>>n>>x>>y;
	int a[n],b[n];
	vector<pair<int,int> > vi;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		vi.push_back({a[i],b[i]});
	sort(vi.begin(),vi.end(),cmp);
	int andy=0,bob=0;
	for(int i=0;i<n;i++)
	{
		if(vi[i].first>vi[i].second)
		{
			if(andy+1<=x)
			{
				andy++;
				ans+=vi[i].first;
			}
			else
			{
				bob++;
				ans+=vi[i].second;
			}
		}
		else
		{
			if(bob+1<=y)
			{
				bob++;
				ans+=vi[i].second;
			}
			else
			{
				andy++;
				ans+=vi[i].first;
			}
		}
	}
	cout<<ans<<"\n";
}
