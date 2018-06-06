#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],pre[n];
	int tot=0;
	for(int i=0;i<n;i++)
	{
	  cin>>a[i];
	  tot+=a[i];
	}
	sort(a,a+n);
	pre[0] = a[0];
	for(int i=1;i<n;i++) pre[i] = pre[i-1]+a[i];
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int m;
		cin>>m;
		int a1 = upper_bound(a,a+n,m)-a;
		if(a1==n) cout<<n<<" "<<tot<<"\n";
		else if(a1==0 && a[a1]!=m) cout<<0<<" "<<0<<"\n";
		else
		{
			cout<<a1<<" "<<pre[a1-1]<<"\n";
		}
	} 
}
