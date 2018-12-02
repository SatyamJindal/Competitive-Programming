#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	while(cin>>n)
	{
		string pat,s;
		cin>>pat>>s;
		
		vector<int> lps(pat.size(),0);
		for(int i=1,k=0;i<pat.size();i++)
		{
			while(k && pat[k]!=pat[i]) k = lps[k-1];
			if(pat[k]==pat[i]) ++k;
			lps[i]=k;
		}
		for(int i=0,k=0;i<s.size();i++)
		{
			while(k && s[i]!=pat[k]) k = lps[k-1];
			if(s[i]==pat[k]) ++k;
			if(k==pat.size())
				cout<<i-k+1<<"\n";
		}
		cout<<"\n";
	}
}
