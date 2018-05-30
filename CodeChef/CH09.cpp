#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a=0,b=0;
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='a') a+=1;
			else b+=1;
		}
		cout<<min(a,b)<<"\n";
	}
}
