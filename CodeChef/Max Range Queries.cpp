#include<bits/stdc++.h>
using namespace std;


int diff[100005],prek[100005],prekp[100005];

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		for(int i=0;i<100005;i++)
			diff[i]=0,prek[i]=0,prekp[i]=0;
		vector<pair<int,int> > vi;
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			int l,r;
			cin>>l>>r;
			diff[l]+=1;
			diff[r+1]-=1;
			vi.push_back({l,r});
		}
		for(int i=1;i<100005;i++)
			diff[i]+=diff[i-1];
		for(int i=1;i<100005;i++)
		{
			if(diff[i]==k)
				prek[i]+=1;
			if(diff[i]==k+1)
				prekp[i]+=1;
			prek[i]+=prek[i-1];
			prekp[i]+=prekp[i-1];
		}
		int maxi=*max_element(prek,prek+100005),ans=0;
		for(auto i:vi)
			ans = max(ans,maxi -prek[i.second]+prek[i.first-1] + prekp[i.second]-prekp[i.first-1]);
		cout<<ans<<"\n";
		
	}
	
}
