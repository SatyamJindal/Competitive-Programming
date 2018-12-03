#include<bits/stdc++.h>
using namespace std;


int indi(int a[],int l,int r,int key)
{
	if(l>r)
		return -1;
	int mid = (l+r)/2;
	if(a[mid]==key)
		return mid;
	if(a[l]<=a[mid])
	{
		if(key>=a[l] && key<=a[mid])
			return indi(a,l,mid-1,key);
		return indi(a,mid+1,r,key);
	}
	
	if(key>=a[mid] && key<=a[r])
		return indi(a,mid+1,r,key);
	return indi(a,l,mid-1,key);
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,key;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>key;
		int ind = indi(a,0,n-1,key);
		cout<<ind<<"\n";
	}
}
