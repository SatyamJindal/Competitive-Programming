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
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,greater<int>());
		int ele = a[k-1];
		int ct=0;
		for(int i=k;i<n;i++)
		{
			if(a[i]==ele) ct+=1;
			else break;
		}
		cout<<k+ct<<"\n";
	}
}
