#include<bits/stdc++.h>
using namespace std;


struct tr
{
	long long eve=-1; 
	long long odd=-1;
};

tr tree[400005];
long long a[100005];



int build(int node,int start,int end)
{
	if(start==end)
	{
		if(a[start]%2==0)
		{
			tree[node].eve=max(tree[node].eve,a[start]);
		}
		else
		{
			tree[node].odd=max(tree[node].odd,a[start]);
		}
	}
	else
	{
		int mid = (start+end)/2;
		build(node*2,start,mid);
		build((node*2)+1,mid+1,end);
		tree[node].eve=max(tree[node*2].eve,tree[(node*2)+1].eve);
		tree[node].odd=max(tree[node*2].odd,tree[(node*2)+1].odd);		
	}
}


void update(int node,int start,int end,int ind,long long val)
{
	if(start==end)
	{
		a[start]=val;
		if(a[start]%2==0)
		{
			tree[node].eve=max(tree[node].eve,a[start]);
		}
		else
		{
			tree[node].odd=max(tree[node].odd,a[start]);
		}
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
	tree[node].eve=max(tree[node*2].eve,tree[(node*2)+1].eve);
	tree[node].odd=max(tree[node*2].odd,tree[(node*2)+1].odd);
	}
}

tr empty()
{
	tr a;
	a.eve=0;
	a.odd=0;
	return a;
}

tr query(int node,int start,int end,int l,int r,int type)
{
	if(l>end || r<start) return empty();
	if(l<=start && end<=r)
	{
		return tree[node];
	}
	else
	{
		tr fin;
		int mid = (start+end)/2;
		tr a1 = query(node*2,start,mid,l,r,type);
		tr a2 = query((node*2)+1,mid+1,end,l,r,type);
		fin.eve = max(a1.eve,a2.eve);
		fin.odd = max(a1.odd,a2.odd);
		return fin;
		
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,1,n);	
	
	for(int i=0;i<q;i++)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			int ind;
			cin>>ind;
			long long val;
			cin>>val;
			update(1,1,n,ind,val);
		}
		else
		{
			int l,r;
			cin>>l>>r;
			tr ans = query(1,1,n,l,r,type);
			if(type==2)
			{
				if(ans.eve!=-1 && ans.eve!=0) cout<<ans.eve<<"\n";
				else cout<<"DNE"<<"\n";
			}
			else
			{
				if(ans.odd!=-1 && ans.odd!=0) cout<<ans.odd<<"\n";
				else cout<<"DNE"<<"\n";
			}
		}
	}
}
