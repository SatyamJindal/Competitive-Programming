#include<bits/stdc++.h>
using namespace std;

int tree[4000005];

void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=1;
	}
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid);
		build((node*2)+1,mid+1,end);
		tree[node] = tree[node*2] + tree[(node*2)+1];
	}
}

void update(int node,int start,int end,int ind)
{
	if(start==end)
	{
		tree[node] = 0;
	}
	else
	{
		int mid = (start+end)/2;
		if(ind>=start and ind<=mid)
		{
			update((node*2),start,mid,ind);
		}
		else
		{
			update((node*2)+1,mid+1,end,ind);
		}
		tree[node] = tree[node*2] + tree[(node*2)+1];
	}
}

int query(int node,int start,int end,int k,int n)
{
	if(start>n || end<1 || tree[node]<k) return -1;
	if(start==end && k==1) return start;
	
	int mid = (start+end)/2;
	if(k>tree[node*2])
	{
		return query((node*2)+1,mid+1,end,k-tree[node*2],n);
	}
	else
	{
		return query((node*2),start,mid,k,n);
	}
}

int main()
{
	int n;
	cin>>n;
	build(1,1,n);
	int q;
	cin>>q;
	while(q--)
	{
		int type;
		cin>>type;
		
		if(type==0)
		{
			int ind;
			cin>>ind;
			update(1,1,n,ind);
		}
		else
		{
			int k;
			cin>>k;
			cout<<query(1,1,n,k,n)<<"\n";
		}
	}
}
