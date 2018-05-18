#include<bits/stdc++.h>
using namespace std;

int tree[400005],a[100005];


int build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=a[start];
	}
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid);
		build((node*2)+1,mid+1,end);
		tree[node] = min(tree[node*2],tree[(node*2)+1]);
	}
}

int query(int node,int start,int end,int l,int r)
{
	if(l>end || r<start) return 1e5;
	if(l<=start && end<=r) return tree[node];
	else
	{
		int mid = (start+end)/2;
		int a = query(node*2,start,mid,l,r);
		int b = query((node*2)+1,mid+1,end,l,r);
		return min(a,b);
	}
	

}

int update(int node,int start,int end,int ind,int val)
{
	if(start==end)
	{
		a[ind]=val;
		tree[node]=val;
	}
	else
	{
		int mid=(start+end)/2;
		if(ind<=mid)
		{
			update(node*2,start,mid,ind,val);
		}
		else if(ind>mid)
		{
			update((node*2)+1,mid+1,end,ind,val);
		}
		tree[node] = min(tree[node*2],tree[(node*2)+1]);
	}
}

int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,1,n);
	for(int i=0;i<q;i++)
	{
		char c;
		cin>>c;
		if(c=='q')
		{
			int l,r;
			cin>>l>>r;
			cout<<query(1,1,n,l,r)<<"\n";
			
		}
		else
		{
			int ind,x;
			cin>>ind>>x;
			update(1,1,n,ind,x);
		}
		
	}
	
}
