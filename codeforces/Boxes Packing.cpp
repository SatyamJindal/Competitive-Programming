#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n,m,k;
int a[N];

int check(int idx)
{
	int boxes=1;
	int left=k;
	for(int i=idx;i<=n;i++)
	{
		if(left-a[i]<0)
		{
			boxes++;
			left = k-a[i];
		}
		else
			left-=a[i];
		if(boxes>m)
			return 0;
	}
	return 1;
}


int bisearch(int lo, int hi)
{
	while(lo<hi)
	{
		int mid = (lo+hi)/2;
		if(check(mid))
			hi=mid;
		else
			lo = mid+1;
	}
	return lo;
}


int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int ans = bisearch(1,n);
	cout<<n-ans+1;
}
