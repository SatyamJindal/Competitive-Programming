#include<bits/stdc++.h>
using namespace std;

int prime[1000005];

int tree[1000005],a[1000005];


int sieve()
{
	int start=2;
	while(start*start<1000005)
	{
		if(prime[start]==0)
		{
			for(int i=start*start;i<1000005;i+=start)
			{
				prime[i]=1;
			}
		}
		start+=1;
	}
}

int build(int node,int start,int end,int a[])
{
	if(start==end)
	{
		if(prime[a[start]]==0) tree[node]=1;
		else tree[node]=0;
	}
	else
	{
		int mid=(start+end)/2;
		build(node*2,start,mid,a);
		build((node*2)+1,mid+1,end,a);
		tree[node] = tree[node*2] + tree[(node*2)+1];
	}
}

int update(int node,int start,int end,int ind,int val,int a[])
{
	if(start==end)
	{
		a[ind]=val;
		if(prime[a[ind]]==0) tree[node]=1;
		else tree[node]=0;
	}
	else
	{
		int mid = (start+end)/2;
		if(ind>=start && ind<=mid)
		{
			update(node*2,start,mid,ind,val,a);
		}
		else
		{
			update((node*2)+1,mid+1,end,ind,val,a);
		}
		tree[node] = tree[node*2] + tree[(node*2)+1];
	}
}

int query(int node,int start,int end,int l,int r)
{
	if(l>end || r<start) return 0;
	if(l<=start && end<=r) return tree[node];
	else
	{
		int mid = (start+end)/2;
		int a = query(node*2,start,mid,l,r);
		int b = query((node*2)+1,mid+1,end,l,r);
		return a+b;
	}
}

int main()
{
	prime[0]=1;
	prime[1]=1;
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		build(1,1,n,a);
		int q;
		cin>>q;
		while(q--)
		{
			char type;
			cin>>type;
			if(type=='A')
			{
				int l,r;
				cin>>l>>r;
				cout<<query(1,1,n,l,r)<<"\n";
			}
			else
			{
				int ind,val;
				cin>>ind>>val;
				update(1,1,n,ind,val,a);
			}
		}
		
	}
}
