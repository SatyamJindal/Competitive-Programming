#include<bits/stdc++.h>
using namespace std;

const int M = 1.5e7 + 10;

int n;

int f[M],p[M];

int main()
{
	int d=0;
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		f[num]++;
		if(d==0) d = num;
		else d = __gcd(d,num);
	}
	
	int ans = n;
	
	for(int i=d+1;i<M;i++)
	{
		if(!p[i])
		{
			int ct=0;
			for(int j=i;j<M;j+=i)
			{
				p[j]=1;
				ct+=f[j];	
			}
			ans = min(ans,n-ct);	
		}		
	}
	if(ans<n) cout<<ans;
	else cout<<-1;
	
	
	
}
