#include<bits/stdc++.h>
using namespace std;

int di[1000005];

int divi()
{
	
	for(int i=2;i<1000005;i++)
	{
		if(di[i]==0)
		{
			for(int j=i;j<1000005;j+=i)
			{
				di[j]+=1;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	divi();
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int count=0;
		for(int i=n;i<m;i++)
		{
			count+=di[i];
		}
		cout<<count<<"\n";
	}
}
