#include<bits/stdc++.h>
using namespace std;
 
 
struct tr
{
	int pre,suf,max_sum,sum;
};
 
int a[50005];
 
tr tree[200005];
 
 
void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node].max_sum=tree[node].pre=tree[node].suf=tree[node].sum=a[start];
	}
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid);
		build((node*2)+1,mid+1,end);
		tree[node].sum = tree[node*2].sum + tree[(node*2)+1].sum;
		tree[node].pre = max(tree[node*2].pre,tree[(node*2)].sum+tree[(node*2)+1].pre);
		tree[node].suf = max(tree[(node*2+1)].suf,tree[(node*2+1)].sum+tree[node*2].suf);
		tree[node].max_sum = max(max(tree[node*2].max_sum,tree[(node*2)+1].max_sum),tree[node*2].suf+tree[(node*2)+1].pre);
	}
}
 
 
tr empty()
{
	tr emp;
	emp.max_sum=emp.pre=emp.suf=emp.sum=0;
	return emp;
}
 
tr query(int node,int start,int end,int l,int r)
{
	if(start>r || end<l) return empty();
	
	if(l<=start && end<=r) return tree[node];
	
	int mid = (start+end)/2;
	
	if(r<=mid) return query(node*2,start,mid,l,r);
	else if(l>mid) return query((node*2)+1,mid+1,end,l,r);
	else
	{
		tr fin;
		tr a1 = query((node*2),start,mid,l,r);
		tr a2 = query((node*2)+1,mid+1,end,l,r);
		fin.sum = a1.sum + a2.sum;
		fin.pre = max(a1.pre,a1.sum+a2.pre);
		fin.suf = max(a2.suf,a2.sum+a1.suf);
		fin.max_sum = max(max(a1.max_sum,a2.max_sum),a1.suf+a2.pre);
		return fin;
	}
}

void update(int node,int start,int end,int idx,int val)
{
	if(start==end)
	{
		tree[node].max_sum=tree[node].pre=tree[node].suf=tree[node].sum=a[start]=val;
	}
	else
	{
		int mid = (start+end)/2;
		if(idx>=start && idx<=mid)
			update(node*2,start,mid,idx,val);
		if(idx>mid && idx<=end)
			update((node*2)+1,mid+1,end,idx,val);
		tree[node].sum = tree[node*2].sum + tree[(node*2)+1].sum;
		tree[node].pre = max(tree[node*2].pre,tree[(node*2)].sum+tree[(node*2)+1].pre);
		tree[node].suf = max(tree[(node*2+1)].suf,tree[(node*2+1)].sum+tree[node*2].suf);
		tree[node].max_sum = max(max(tree[node*2].max_sum,tree[(node*2)+1].max_sum),tree[node*2].suf+tree[(node*2)+1].pre);
	}
}
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,1,n);
	int m;
	cin>>m;
	while(m--)
	{
		int type,l,r;
		cin>>type>>l>>r;
		if(type==0)
			update(1,1,n,l,r);
		else
			cout<<query(1,1,n,l,r).max_sum<<"\n";
	}
} 
