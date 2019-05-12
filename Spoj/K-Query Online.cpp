#include<bits/stdc++.h>
using namespace std;

int n,q;
int a[300005];

vector<vector<int> > tree(300005);

void build(int node,int start,int end)
{
	if(start==end)
		tree[node].push_back(a[start]);
	else
	{
		int mid = (start+end)>>1;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		merge(tree[node*2].begin(),tree[2*node].end(),tree[2*node+1].begin(),tree[2*node+1].end(),back_inserter(tree[node]));
	}
}

int query(int node,int start,int end,int l,int r,int k)
{
	if(l>end || r<start)
		return 0;
	if(l<=start && end<=r)
		return (tree[node].size() - (upper_bound(tree[node].begin(),tree[node].end(),k) - tree[node].begin()));
	else
	{
		int mid = (start+end)>>1;
		return (query(node*2,start,mid,l,r,k) + query(2*node+1,mid+1,end,l,r,k));
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	build(1,1,n);
	cin>>q;
	int last_ans=0;
	for(int i=0;i<q;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int x = max(1,(last_ans^a));
		int y = min(n,(last_ans^b));
		int k = (last_ans^c);
		last_ans = query(1,1,n,x,y,k);
		cout<<last_ans<<"\n";
	}
}
