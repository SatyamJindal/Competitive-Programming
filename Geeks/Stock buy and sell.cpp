#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		vector<pair<int,int> > ans;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int le=0,ri=1;
		while(ri!=n)
		{
			if(a[ri]>a[ri-1]) ri+=1;
			else
			{
				if(ri-le>1) ans.push_back({le,ri-1});
				le=ri; 
				ri+=1;
			}
			//cout<<"le "<<le<<" ri"<<ri<<"\n";
		}
		if(ri-le>1) ans.push_back({le,ri-1});
		if(ans.size()==0) cout<<"No Profit"<<"\n";
		else
		{
			for(int i=0;i<ans.size();i++) cout<<"("<<ans[i].first<<" "<<ans[i].second<<")"<<" ";
			cout<<"\n";
		}
	}
}
