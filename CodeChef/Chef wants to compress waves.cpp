#include<bits/stdc++.h>
using namespace std;

char lower[26];

int main()
{
	ios_base::sync_with_stdio(false);
	for(int i=0;i<26;i++)
	{
		lower[i] = char(97+i);
	}
	int t;
	cin>>t;
	
	while(t--)
	{
		int d,n,ind=0;
		cin>>d>>n;
		string s,fin,final;
		cin>>s;
		sort(s.begin(),s.end());
		for(int i=0;i<d;i++)
		{
			if(s[ind]!=lower[i])
			{
				fin+=lower[i];
			}
			else
			{
				ind+=1;
			}
		}
		for(int i=0;i<n;i++) final+=fin;
		cout<<final<<"\n";
	}
	
}
