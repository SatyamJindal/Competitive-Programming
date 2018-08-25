#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	multiset<int> l,r;
	vector<pair<int,int> > v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
		l.insert(v[i].first);
		r.insert(v[i].second);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		l.erase(l.find(v[i].first));
		r.erase(r.find(v[i].second));
		ans = max(ans,*r.begin() - *--l.end());
		l.insert(v[i].first);
		r.insert(v[i].second);
	}
	cout<<ans<<"\n";
	
}
