#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,flag=0;
	cin>>n;
	string s;
	cin>>s;
	int a[26];
	memset(a,0,sizeof(a));
	for(int i=0;i<s.size();i++)
	{
		a[(int)s[i]-97]+=1;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>=2)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1 || s.size()==1) cout<<"Yes"<<"\n";
	else cout<<"No"<<"\n";
}
