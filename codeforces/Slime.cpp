#include<bits/stdc++.h>
using namespace std;

int n;
int a[500005];
long long ans;


int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	ans = a[n-1];
	if(n>1)
	{
		ans-=a[0];
	}
	for(int i=1;i<n-1;i++) ans+=abs(a[i]);
	
	cout<<ans<<"\n";
}
