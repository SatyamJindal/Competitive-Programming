#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	int cost=0;
	int flag=0;
	k-=1;
	cost+=(int)s[0]-96;
	char prev=s[0];
	for(int i=1;i<n;i++)
	{
		if(k<=0) break;
		if(s[i]!=prev && (int)(s[i])>=(int)(prev)+2)
		{
			cost+=(int)(s[i])-96;
			prev=s[i];
			k-=1;
		}
	}
	if(k>0) cout<<-1;
	else cout<<cost;
}
