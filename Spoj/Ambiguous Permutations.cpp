#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n!=0)
	{
		vector<pair<int,int> > vi;
		vector<int> a(n+1,0);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			vi.push_back({a[i],i});
		}
		sort(vi.begin(),vi.end());
		bool nambi = false;
		int j=1;
		for(auto i:vi)
		{
			if(i.second!=a[j])
			{
				nambi = true;
				break;
			}
			j+=1;
		}
		if(nambi) cout<<"not ambiguous"<<"\n";
		else cout<<"ambiguous"<<"\n";
		cin>>n;
	}
}
