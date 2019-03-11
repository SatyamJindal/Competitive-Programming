#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int days(int n,ll a[],ll val)
{
	int num=0;
	ll curr=0;
	for(int i=0;i<n;i++)
	{
		if(curr+a[i]>=val)
		{
			num+=1;
			if(curr+a[i]==val)
				curr=0;
			else
				curr=a[i];
		}
		else
			curr+=a[i];
	}
	if(curr>0)
		num+=1;
	return num;
}


int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	ll a[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	ll l=*max_element(a,a+n),r=sum;
	while(l!=r)
	{
		int mid = (l+r)/2;
		int num = days(n,a,mid);
		if(num<=m)
			r=mid;
		else
			l=mid+1;
		
	}
	cout<<l<<"\n";
	
}
