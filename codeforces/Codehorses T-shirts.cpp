#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	map<string,int> mp;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		++mp[s];
	}
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(mp[s]>0)
		{
			--mp[s];
		}
		else
		{
			++count;
		}
	}
	cout<<count;
}
