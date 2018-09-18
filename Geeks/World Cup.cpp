#include<bits/stdc++.h>
using namespace std;

int n,a,b;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>a>>b;
	a--;b--;
	int ct=0;
	while(a!=b)
	{
		++ct;
		a/=2;
		b/=2;
	}
	if((1<<ct)==n) cout<<"Final!";
	else cout<<ct;
}
