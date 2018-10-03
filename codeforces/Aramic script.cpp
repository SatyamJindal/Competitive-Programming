#include<bits/stdc++.h>
using namespace std;


int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	
	set<string> ans;
	for(int I=0;I<n;I++)
	{
		set<char> dis;
		string s,fin;
		cin>>s;
		for(auto i:s) dis.insert(i);
		for(auto i:dis) fin+=i;
		ans.insert(fin);
	}
	cout<<ans.size();
	
}
