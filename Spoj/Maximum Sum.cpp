#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pi pair<int,int>

ll a[100010];
pi tree[400020];
	
void build(int node,int start,int end)
{
	if(start==end)
		tree[node] = {a[start],start};
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid);
		build(2*node+1,mid+1,end);
		
		tree[node] = max(tree[node*2],tree[2*node + 1]);
	}
}

void update(int node,int start,int end,int idx,int val)
{
	if(start==end)
	{
		tree[node] = {val,idx};
		a[idx]=val;
	}
	else
	{
		int mid = (start+end)/2;
		if(idx<=mid)
			update(node*2,start,mid,idx,val);
		else if(idx>mid)
			update(2*node+1,mid+1,end,idx,val);
		
		tree[node] = max(tree[2*node],tree[2*node+1]);
	}
}

pi query(int node,int start,int end,int l,int r)
{
	if(l>end || r<start)
		return pi(INT_MIN,INT_MIN);
	if(l<=start && end<=r)
		return tree[node];
	else
	{
		int mid = (start+end)/2;
		pi a,b;
		a = query(node*2,start,mid,l,r);
		b = query(2*node+1,mid+1,end,l,r);
		
		return max(a,b);
	}
}
	
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	build(1,1,n);
	int q,l,r;
	scanf("%d",&q);
	char type;
	while(q--)
	{
		cin>>type;
		scanf("%d%d",&l,&r);
		if(type=='Q')
		{
			int idx = query(1,1,n,l,r).second;
			int left=INT_MIN,right=INT_MIN;
			if(idx!=l)
				left = query(1,1,n,l,idx-1).first;
			if(idx!=r)
				right = query(1,1,n,idx+1,r).first;
			cout<<a[idx]+max(left,right)<<"\n";
		}
		else
			update(1,1,n,l,r);
	}
}
