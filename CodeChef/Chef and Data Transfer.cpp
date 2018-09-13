#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,l;
	cin>>n>>l;
	string corr;
	cin>>corr;
	int mini=99999999;
	string ans;
	for(int i=0;i<n;i++)
	{
		int ct=0;
		string check;
		cin>>check;
		
		for(int j=0;j<check.size();j++)
		{
			if(corr[j]!=check[j]) ct+=1;
		}
		if(ct<mini)
		{
			mini = ct;
			ans = check;
		}
	}
	cout<<ans;
}
