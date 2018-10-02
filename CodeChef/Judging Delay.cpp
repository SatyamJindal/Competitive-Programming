#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int ct=0;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			if(b-a>5) ct+=1;
		}
		cout<<ct<<"\n";
	}
}
