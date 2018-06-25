#include<bits/stdc++.h>
using namespace std;

const int M = 1e5+6;

int n;
long long a[M];
long long f[M];

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		a[p]++;
	}
	f[0]=0; f[1]=a[1];
	for(int i=2;i<M;i++) f[i] = max(f[i-1],f[i-2]+a[i]*i);
	cout<<f[M-1]<<"\n";
}
