#include<bits/stdc++.h>
using namespace std;

int ct[26];

int main()
{
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		ct[s[i]-'A']+=1;
	}
	cout<<k*(*min_element(ct,ct+k));
}
