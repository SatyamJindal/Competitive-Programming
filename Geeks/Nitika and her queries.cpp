#include<bits/stdc++.h>
using namespace std;

#define ll long long

void build(int node,int start,int end,int tree[],int a[])
{
	if(start==end)
	{
		tree[node] = a[start];
	}
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid,tree,a);
		build((node*2)+1,mid+1,end,tree,a);
		tree[node] = (tree[node*2]^tree[(node*2)+1]);
	}
}

int query(int node,int start,int end,int tree[],int a[],int l,int r)
{
	if(l>end || r<start) return 0;
	if(l<=start && end<=r) return tree[node];
	else
	{
		int mid = (start+end)/2;
		int a1 = query(node*2,start,mid,tree,a,l,r);
		int a2 = query((node*2)+1,mid+1,end,tree,a,l,r);
		return (a1^a2);
	}
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int tree[4*n],a[n+10];
		memset(tree,0,sizeof(tree));
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++) cin>>a[i];
		build(1,1,n,tree,a);
		//for(int i=1;i<=2*n;i++) cout<<tree[i]<<" ";
		//cout<<"\n";
		for(int i=0;i<q;i++)
		{
			int l,r;
			cin>>l>>r;
			if(l==1) cout<<query(1,1,n,tree,a,r+1,n)<<"\n";
			else if(r==n) cout<<query(1,1,n,tree,a,1,l-1)<<"\n";
			else
			{
				int left = query(1,1,n,tree,a,1,l-1);
				int right = query(1,1,n,tree,a,r+1,n);
				cout<<(left^right)<<"\n";
			}
		}
	}
}
