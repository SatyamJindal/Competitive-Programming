#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,t;
	cin>>t;
	ll s;
	while(t--)
	{
		cin>>n>>s;
		ll a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int start=0;
		ll curr_sum = a[0];
		bool flag=0;
		for(int i=1;i<n;i++)
		{
			curr_sum+=a[i];
			while(curr_sum>s && start<i)
			{
				curr_sum -= a[start];
				start+=1;
			}
			
			if(curr_sum==s)
			{
				cout<<start+1<<" "<<i+1<<"\n";
				flag=1;
				break;
			}
			
		}
		if(!flag) cout<<-1<<"\n";
	}
	
}
