#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	for(int i=0;i<m;i++)
	{
		string s1="";
		int l,r;
		char c1,c2;
		cin>>l>>r>>c1>>c2;
		for(int i=0;s[i]!='\0';i++)
		{
			if(i>=l-1 && i<=r-1 && s[i]==c1)
			{
				s1+=c2;
			}
			else
			{
				s1+=s[i];
			}
		}
		s=s1;
	}
	cout<<s;
}
