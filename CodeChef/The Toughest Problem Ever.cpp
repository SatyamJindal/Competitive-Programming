#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,ans=0;
	cin>>n;
	string a;
	for(int i=0;i<n;i++)
	{
		int su=0;
		cin>>a;
		for(int j=0;j<a.size();j++)
		{
			su+=a[j]-'0';
		}
		if(su%3==0) ans+=1;
	}
	cout<<ans;
	
}
