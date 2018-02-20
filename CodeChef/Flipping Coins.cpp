#include<bits/stdc++.h>
using namespace std;

struct segtree{
	int st;
	int lz;
}tree[4000005];

int a[1000005];


int build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node].st = a[start];
		tree[node].lz = 0;
	}
	else
	{
		int mid = (start+end)>>1;
		build(node<<1,start,mid);
		build(node<<1|1,mid+1,end);
		tree[node].st = tree[node<<1].st + tree[node<<1|1].st;
		tree[node].lz=0;
	}
}


int query(int node,int start,int end,int l, int r)
{
	if(tree[node].lz & 1)
	{
		tree[node].st = end-start+1-tree[node].st;
		tree[node<<1].lz+=tree[node].lz;
		tree[node<<1|1].lz +=tree[node].lz;
		tree[node].lz=0;
	}
	if(start>r || end<l) return 0;
	if(l<=start && end<=r)
	{
		return tree[node].st;
	}
	else
	{
		int mid = (start+end)/2;
		int a = query(node<<1,start,mid,l,r);
		int b = query(node<<1|1,mid+1,end,l,r);
		return a+b;
	}
}

int mark(int node,int start,int end,int l,int r)
{
	if(tree[node].lz & 1)
	{
		tree[node].st = end-start+1-tree[node].st;
		tree[node<<1].lz+=tree[node].lz;
		tree[node<<1|1].lz +=tree[node].lz;
		tree[node].lz=0;
	}
	if(start>r || end<l) return 0;
	if(l<=start && end<=r)
	{
		tree[node].st = end-start+1-tree[node].st;
		tree[node<<1].lz+=1;
		tree[node<<1|1].lz+=1;
		tree[node].lz=0;
	}
	else
	{
		int mid = (start+end)/2;
		mark(node<<1,start,mid,l,r);
		mark(node<<1|1,mid+1,end,l,r);
		tree[node].st = tree[node<<1].st + tree[node<<1|1].st;
	}
}


int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++) a[i]=0;
	build(1,0,n-1);
	while(q--)
	{
		int type,l,r;
		cin>>type>>l>>r;
		if(type==0)
		{
			mark(1,0,n-1,l,r);
		}
		else cout<<query(1,0,n-1,l,r)<<endl;
	}
}
