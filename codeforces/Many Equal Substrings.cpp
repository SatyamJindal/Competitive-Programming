#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	
	for(int i=n-1;i>0;i--)
	{
		if(s.substr(n-i)==s.substr(0,i))
		{
			cout<<s;
			while(--k)
			{
				cout<<s.substr(i);
			}
			return 0;
		}
	}
	while(k--) cout<<s;
}
