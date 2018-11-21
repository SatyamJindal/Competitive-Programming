#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		if(count(s.begin(),s.end(),'R')==count(s.begin(),s.end(),'G'))
		{
			int ct=0;
			for(int i=0;i<s.size()-1;i++)
			{
				if(s[i]==s[i+1]) ct+=1;
			}
			if(s[s.size()-1]==s[0]) ct+=1;
			if(ct==0 || ct==2) cout<<"yes"<<"\n";
			else cout<<"no"<<"\n";
		}
		else
			cout<<"no"<<"\n";
	}
}
