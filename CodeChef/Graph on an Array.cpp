#include<bits/stdc++.h>
using namespace std;



int find(int x,int par[]){
	return par[x] = (par[x] == x)?x: find(par[x],par);
}

int unite(int x, int y,int par[]){
	if(find(x,par)<find(y,par))par[find(y,par)] = find(x,par);	
	else par[find(x,par)] = find(y,par);
}


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		set<int> un;
		int par[60];
		for(int i=0;i<60;i++) par[i]=i;
		int n;
		cin>>n;
		int a[n];
		int check=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			un.insert(a[i]);
		}
		if(un.size()==1 && *un.begin()==47 && n>1)
		{
			a[0]=43;
			cout<<1<<"\n";
			for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n";
		}
		else if(un.size()==1 && n>1)
		{
			a[0]=47;
			cout<<1<<"\n";
			for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n";
		}
		else
		{
			
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i!=j && __gcd(a[i],a[j])==1)
				{
					unite(a[i],a[j],par);
					//g[a[i]].push_back(a[j]);
					//g[j].push_back(a[i]);
				}
			}
		}
		int conn=0;
		set<int> se;
		for(int i=0;i<n;i++)
		{
			se.insert(find(a[i],par));
			//cout<<find(a[i],par)<<"\n";
		}
		if(se.size()==1)
		{
			cout<<0<<"\n";
			for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n";
		}
		else
		{
			a[0]=47;
			cout<<1<<"\n";
			for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"\n";
		}
		
	}
		
		
	}
}
