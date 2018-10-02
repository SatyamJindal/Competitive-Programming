#include<bits/stdc++.h>
using namespace std;

#define N 30010
#define M 200010
#define A 1000010
#define BLOCK 174

int answer;
struct query
{
	int l,r,ind;
}Q[M];

int ans[M];
int a[N];
int cnt[A];

void add(int ind)
{
	cnt[a[ind]]++;
	if(cnt[a[ind]]==1) answer++;
}

void remove(int ind)
{
	cnt[a[ind]]--;
	if(cnt[a[ind]]==0) answer--;
}



bool cmp(query f,query s)
{
	if((f.l/BLOCK)!=(s.l/BLOCK))
		return (f.l/BLOCK)<(s.l/BLOCK);
	else
		return f.r<s.r;
}


int main()
{
	ios_base::sync_with_stdio(false);
	int n,q;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>Q[i].l>>Q[i].r;
		Q[i].ind = i;
		Q[i].l--;
		Q[i].r--;
	}
	sort(Q,Q+q,cmp);
	
	int cl=0, cr=0;
	for(int i=0;i<q;i++)
	{
		int left = Q[i].l, right = Q[i].r;
		while(cl<left)
			remove(cl),cl++;
		while(cl>left)
			add(cl-1),cl--;
		while(cr<=right)
			add(cr),cr++;
		while(cr>right+1)
			remove(cr-1),cr--;
		ans[Q[i].ind] = answer;
	}
	
	for(int i=0;i<q;i++)
	{
		cout<<ans[i]<<"\n";
	}
	
	
	
}
