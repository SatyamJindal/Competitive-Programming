#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define MOD 1000000007
 
 
void mul(ll a[][2],ll b[][2])
{
	ll res[2][2];
	memset(res,0,sizeof(res));
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++)
				res[i][j] = (res[i][j] + a[i][k]*b[k][j])%MOD;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			a[i][j] = res[i][j];
}
 
ll po(ll n)
{
	ll fib[2][2]={ {1,1},{1,0}}, temp[2][2] = { {1,0},{0,1}};
	while(n)
	{
		if(n&1)
			mul(temp,fib);
		mul(fib,fib);
		n>>=1;
	}
	return temp[0][1];
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		cout<<(po(r+2)-po(l+1)+MOD)%MOD<<"\n";
	}
} 
