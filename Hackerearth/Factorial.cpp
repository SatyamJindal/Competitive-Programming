#include<bits/stdc++.h>
using namespace std;

long long fact[100005];

void cal()
{
	fact[0]=1; fact[1]=1; fact[2]=2;
	for(int i=3;i<100005;i++)
	{
		fact[i] = (fact[i-1]%(1000000007)*(i%1000000007))%1000000007;
	}
}

int main()
{
	cal();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<fact[n]<<"\n";
	}
}
