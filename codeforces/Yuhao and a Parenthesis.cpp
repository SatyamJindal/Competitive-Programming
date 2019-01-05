#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int ans=0;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int tot=0;
		for(char c:s){
			tot += (c=='(' ? +1 : -1);
		}
		bool good=true;
		int pref=0;
		for(char c:s)
		{
			pref+= (c=='('?+1:-1);
			if(pref<min(0,tot))
			{
				good=false;
				break;
			}
		}
		if(!good) 
			continue;
		if(mp[-tot]>0)
		{
			ans++;
			mp[-tot]--;
		}
		else
			mp[tot]++;
	}
	cout<<ans<<"\n";
}
