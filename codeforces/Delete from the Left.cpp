#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1,p,p1;
	cin>>s>>s1;
	int right=-10;
	if(s.size()<=s1.size())
	{
		p=s; p1=s1;
	}
	else
	{
		p=s1; p1=s;
	}
	int ind = p1.size()-1;
	for(int i=p.size()-1;i>-1;i--)
	{
		if(p[i]!=p1[ind])
		{
			right=i;
			break;
		}
		ind-=1;
	}
	//cout<<"right "<<right;
	if(right==-10) cout<<p1.size()-p.size();
	else
	{
		cout<<2*(right+1) + p1.size()-p.size();
	}
}
