#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,ct=0;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1') ct+=1;
		}
		cout<<ct<<"\n";
	}
}
