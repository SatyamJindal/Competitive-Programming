#include<bits/stdc++.h>
using namespace std;

struct tr{
	int left=-1,right=-1;
	bool inc=true,dec=true;
};


int a[100005];
tr tree[400005];

void func(int node)
{
	if(tree[node*2].right<tree[(node*2)+1].left)
		{
			if(tree[(node*2)+1].inc==true && tree[(node*2)].inc==true)
			{
				tree[node].inc=true;
				tree[node].dec=false;
			}
			else
			{
				tree[node].inc=false;
				tree[node].dec=false;
			}
		}
		if(tree[node*2].right>tree[(node*2)+1].left)
		{
			if(tree[(node*2)+1].dec==true && tree[(node*2)].dec==true)
			{
				tree[node].inc=false;
				tree[node].dec=true;
			}
			else
			{
				tree[node].inc=false;
				tree[node].dec=false;
			}
		}
	if(tree[node*2].right==tree[(node*2)+1].left) 
	{
		tree[node].inc=false; tree[node].dec=false;
	}
}

void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node].left=tree[node].right=a[start];
	}
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid);
		build((node*2)+1,mid+1,end);
		tree[node].left = tree[node*2].left;
		tree[node].right = tree[(node*2)+1].right;
		func(node);
	}
}

void update(int node,int start,int end,int ind,int val)
{
	if(start==end)
	{
		tree[node].left=tree[node].right=val;
	}
	else
	{
		int mid = (start+end)/2;
		if(ind>=start && ind<=mid)
		{
			update(node*2,start,mid,ind,val);
		}
		else if(ind>mid && ind<=end)
		{
			update((node*2)+1,mid+1,end,ind,val);
		}
		tree[node].left = tree[node*2].left;
		tree[node].right = tree[(node*2)+1].right;
		func(node);
	}
}


tr empty()
{
	tr f;
	f.left=-1;f.right=-1;f.dec=true;f.inc=true;
	return f;
}

tr query(int node,int start,int end,int l,int r)
{
	if(l>end || r<start) return empty();
	if(l<=start && end<=r) return tree[node];
	else
	{
		int mid = (start+end)/2;
		tr le = query(node*2,start,mid,l,r);
		tr ri = query((node*2)+1,mid+1,end,l,r);
		if(le.left==-1 && le.right==-1) return ri;
		else if(ri.left==-1 && ri.right==-1) return le;
		else
		{
		tr c;
		c.left = le.left;
		c.right = ri.right;
		if(le.right<ri.left && le.inc==true && ri.inc==true)
		{
			c.inc=true;
			c.dec=false;
		}
		else if(le.right>ri.left && le.dec==true && ri.dec==true)
		{
			c.dec=true;
			c.inc=false;
		}
		else
		{
			c.dec=false; c.inc=false;
		}
		return c;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=0;i<400005;i++)
		{
			tree[i].dec=true; tree[i].inc=true; tree[i].left=-1; tree[i].right=-1;
		}
		build(1,1,n);
		/*for(int i=1;i<=16;i++)
		{
			cout<<tree[i].dec<<" "<<tree[i].inc<<" "<<tree[i].left<<" "<<tree[i].right;
			cout<<"\n";
		}*/
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			int x,l,r;
			cin>>x>>l>>r;
			if(x==1)
			{
				update(1,1,n,l,r);
			}
			else
			{
				tr ans = query(1,1,n,l,r);
				//cout<<ans.dec<<" "<<ans.inc<<" "<<ans.left<<" "<<ans.right<<"\n";
				if(ans.dec==true && ans.inc==false) cout<<1<<"\n";
				else if(ans.inc==true && ans.dec==false) cout<<0<<"\n";
				else cout<<-1<<"\n";
			}
		}
	}
}
