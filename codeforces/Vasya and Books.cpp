#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	set<int> st;
	int ind=0;
	for(int i=0;i<n;i++)
	{
		int ct=0;
		if(st.find(b[i])!=st.end())
		{
			cout<<0<<" ";
		}
		else
		{
			for(int j=ind;j<n;j++)
			{
				if(a[j]==b[i])
				{
					ct+=1;
					st.insert(b[i]);
					ind=j+1;
					break;
				}
				else
				{
					st.insert(a[j]);
					ct+=1;	
				}
			}
			cout<<ct<<" ";
		}
	}
}
