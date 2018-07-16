#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		vector<string> st;
		string s;
		cin>>s;
		string s1="";
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]!='.') s1+=s[i];
			else if(s[i]=='.')
			{
				//cout<<s1<<"\n";
				st.push_back(s1);
				s1="";
			}
		}
		st.push_back(s1);
		for(int i=st.size()-1;i>-1;i--)
		{
			cout<<st[i];
			if(i!=0) cout<<".";
		}
		cout<<"\n";
		
		
	}
}
