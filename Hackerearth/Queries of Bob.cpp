#include<bits/stdc++.h>
using namespace std;

long long tree[5000005],a[5000005];


int update(int node,int start,int end,int ind,int t)
{
	if(start==end)
	{
		if(t==1) a[ind] = 2*a[ind] +1;
		else if(t==2) a[ind] = a[ind]/2;
		int count=0;
		long long valu=a[ind];
		while(valu)
		{
			if(valu&1) count+=1;
			valu>>=1;
		}
		tree[node] = count;
	}
	else
	{
		int mid = (start+end)/2;
		if(start<=ind && ind<=mid)
		{
			update(node*2,start,mid,ind,t);
		}
		else
		{
			update((node*2)+1,mid+1,end,ind,t);
		}
		tree[node] = tree[node*2] + tree[(node*2)+1];
	}
}

long long query(int node,int start,int end,int l,int r)
{
	if(l>end || r<start) return 0;
	if(l<=start && end<=r) return tree[node];
	else
	{
		int mid = (start+end)/2;
		long long a1 = query(node*2,start,mid,l,r);
		long long a2 = query((node*2)+1,mid+1,end,l,r);
		return a1+a2;
	}
}

int main()
{
	memset(tree,0,sizeof(tree));
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++)
	{
		int type;
		cin>>type;
		if(type==1 || type==2)
		{
			int ind;
			cin>>ind;
			update(1,1,n,ind,type);
		}
		else
		{
			int l,r;
			cin>>l>>r;
			cout<<query(1,1,n,l,r)<<"\n";
		}
	}
	
}
