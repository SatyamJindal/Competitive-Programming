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
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		if(n%2) cout<<"NO"<<"\n";
		else
		{
			bool notp=false;
			for(int i=0;i<n/2;i++)
			{
				if(a[i]==-1 && a[n/2+i]==-1)
				{
					a[i]=1; a[n/2+i]=1;
				}
				else if(a[i]==-1 || a[n/2+i]==-1)
				{
					int ma = max(a[i],a[n/2+i]);
					a[i]=ma; a[n/2+i]=ma;
				}
				else if(a[i]!=a[n/2+i])
				{
					notp=true;
					break;
				}
			}
			if(notp) cout<<"NO"<<"\n";
			else
			{
				cout<<"YES"<<"\n";
				for(int i=0;i<n;i++) cout<<a[i]<<" ";
				cout<<"\n";
			}
		}
	}
}
