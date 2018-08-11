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
		long long a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=0;i<n;i++)
		{
			cout<<sum-a[i]<<" ";
		}
		cout<<"\n";
		
	}
} 
