#include<bits/stdc++.h>
using namespace std;

int x;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[i] = x;		
		}
		for(int i=0;i<n;i++)
		{
			if(k-a[i]>=0)
			{
				cout<<1;
				k-=a[i];
			}
			else cout<<0;
		}
		cout<<"\n";
	}
}
