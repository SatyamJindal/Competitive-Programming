#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n+1,0);
		for(int i=1;i<=n;i++) cin>>a[i];
		multiset<int> fin;
		for(int i=1;i<=k;i++) fin.insert((-1)*(a[i]));
		cout<<abs(*fin.begin())<<" ";
		for(int i=k+1;i<n+1;i++)
		{
			auto itr = fin.find((-1)*(a[i-k])));
			if(itr!=fin.end()) fin.erase(itr);
			fin.insert((-1)*(a[i]));
			cout<<abs(*fin.begin())<<" ";
		}
		
		cout<<"\n";
	}
}
