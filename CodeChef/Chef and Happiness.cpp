#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		map<int, set<int> > mp;
		for(int i=0;i<n;i++)
		{
			int first = a[i];
			int second = a[first-1];
			mp[second].insert(first);
		}
		bool poss = false;
		for(auto i:mp)
		{
			if(i.second.size()>1) 
			{
				poss = true;
				break;
			}
		}
		if(poss) cout<<"Truly Happy"<<"\n";
		else cout<<"Poor Chef"<<"\n";
	}
}
