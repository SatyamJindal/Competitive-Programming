#include<bits/stdc++.h>
using namespace std;

int n,q;
int a[30005];
vector<pair<vector<int>,int> > vi;
vector<pair<int,int> > arr;


int tree[200005];

void build(int node,int start,int end)
{
	if(start==end)
		tree[node]=1;
	else
	{
		int mid = (start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node] = tree[node*2] + tree[2*node+1];
	}
}

int query(int node,int start,int end,int l,int r)
{
	if(l>end || r<start)
		return 0;
	if(l<=start && end<=r)
		return tree[node];
	else
	{
		int mid = (start+end)/2;
		int a = query(2*node,start,mid,l,r);
		int b = query(2*node+1,mid+1,end,l,r);
		return a+b;
	}
}

void update(int node,int start,int end,int idx)
{
	if(start==end)
		tree[node]=0;
	else
	{
	int mid = (start+end)/2;
	if(idx<=mid && idx>=start)
		update(node*2,start,mid,idx);
	else
		update(2*node+1,mid+1,end,idx);
	tree[node] = tree[2*node] + tree[2*node + 1];
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		arr.push_back({a[i],i});
	}
	cin>>q;
	vector<int> ans(q,0);
	for(int i=0;i<q;i++)
	{
		int l,r,k;
		cin>>l>>r>>k;
		vector<int> temp = {k,l,r};
		vi.push_back({temp,i});
	}
	sort(arr.begin(),arr.end());
	sort(vi.begin(),vi.end());
	
	int po=0;
	build(1,1,n);

	
	for(int i=0;i<q;i++)
	{
		int k = vi[i].first[0];

		while(po<n && arr[po].first<=k)
		{
			update(1,1,n,arr[po].second);
			po++;
		}
		ans[vi[i].second] = query(1,1,n,vi[i].first[1],vi[i].first[2]);
	}
	for(auto i:ans)
		cout<<i<<"\n";
}
