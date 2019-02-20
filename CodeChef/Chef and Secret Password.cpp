#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int> z(n);
		int l=0,r=0;
		for(int i=1;i<n;i++)
		{
			if(i<=r) z[i] = min(r-i+1,z[i-l]);
			while(i+z[i]<n && s[z[i]]==s[i+z[i]]) z[i]++;
			if(i+z[i]>=r) l=i, r=i+z[i]-1;
		}
		int mini=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(z[i]>0)
				mini = min(mini,z[i]);
		}
		if(mini==INT_MAX)
			cout<<s<<"\n";
		else
		{
			cout<<s.substr(0,mini)<<"\n";
		}
		
	}
}
