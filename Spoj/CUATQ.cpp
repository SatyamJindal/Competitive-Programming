#include<bits/stdc++.h>
using namespace std;


long long a[500005];
long long tree[2000005];

int build(int node,int start,int end)
{
	if(start==end) tree[node]=a[start];
	else
	{
		long long mid = (start + end)/2;
		build(node*2,start,mid);
		build((node*2)+1,mid+1,end);
		tree[node]=max(tree[node*2],tree[(node*2)+1]);
	}
}

int query(int node,int start,int end,long long l,long long r)
{
	if(l>end || r<start) return 0;
	if(l<=start && end<=r) return tree[node];
	else{
		long long mid = (start+end)/2;
		long long a=query(node*2,start,mid,l,r);
		long long b=query((node*2)+1,mid+1,end,l,r);
		return max(a,b);
	}
}


int main()
{
	long long n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	build(1,0,n-1);
	//for(int i=0;i<16;i++) cout<<tree[i]<<" ";
	long long m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		long long l,r;
		cin>>l>>r;
		cout<<query(1,0,n-1,l-1,r-1)<<"\n";
	}
	
}
