#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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
		int ind1=-1;
		int ind2=-1;
		bool odd=false;
		int no_odd=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2) no_odd+=1;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]%2)
			{
				ind1=i;
				break;
			}
		}
		for(int i=n-1;i>-1;i--)
		{
			if(a[i]%2)
			{
				ind2=i;
				break;
			}
		}
		if(no_odd%2==0) cout<<n<<"\n";
		else cout<<max(ind2,n-ind1-1)<<"\n";
	}
}
