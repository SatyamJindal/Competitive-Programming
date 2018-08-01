#include<bits/stdc++.h>
using namespace std;

int par[100005];


int find(int a)
{
	return par[a]=(par[a]==a?a:find(par[a]));
}

int unite(int a,int b)
{
	int p = find(a);
	int q = find(b);
	par[q] = p;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0;i<100005;i++) par[i]=i;
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int type,a,b;
		cin>>type>>a>>b;
		if(type==0)
		{
			unite(a,b);
		}
		else
		{
			if(par[find(a)]==par[find(b)]) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
}
