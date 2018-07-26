#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		map<char,int> mp;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(mp[s[i]]==0) cout<<s[i];
			++mp[s[i]];
		}
		cout<<"\n";
	}
}
