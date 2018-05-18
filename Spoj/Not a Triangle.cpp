#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int a1 = upper_bound(a,a+n,a[i]+a[j])-a;
				count+=(n-a1);
			}
		}
		cout<<count<<"\n";
		cin>>n;
	}
	
}
