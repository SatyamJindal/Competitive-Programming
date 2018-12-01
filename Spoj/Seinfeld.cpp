#include<bits/stdc++.h>
using namespace std;

int ans(string s)
{
	int ans=0,nomatch=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='{')
			nomatch+=1;
		else if(nomatch>0)
			nomatch-=1;
		else
		{
			ans+=1;
			nomatch+=1;
		}
	}
		ans+=(nomatch/2);
	return ans;
}


int main()
{
	int i=1;
	ios_base::sync_with_stdio(false);
	while(1)
	{
		string s;
		cin>>s;
		if(s.find('-')!=string::npos)
			return 0;
		cout<<i++<<". "<<ans(s)<<"\n";
		
	}
}
