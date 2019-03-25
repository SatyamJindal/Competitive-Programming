#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
	if(a.first==b.first) return a.second<b.second;
	else return a.first>b.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int> > vi;
		for(int i=0;i<n;i++)
		{
			int w,h;
			cin>>w>>h;
			vi.push_back(make_pair(w,h));
		}
		sort(vi.begin(),vi.end(),cmp);
		vector<int> ans;
		for(auto i:vi)
		{
			int curr = i.second;
			if(ans.size()==0)
				ans.push_back(curr);
			else
			{
				int ind = upper_bound(ans.begin(),ans.end(),curr) - ans.begin();
				if(ind==ans.size())
					ans.push_back(curr);
				else
					ans[ind]=curr;
			}
		}
		cout<<ans.size()<<"\n";
	}
}
