#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		map<int,int> dt;
		int n;
		cin>>n;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			dt[x]+=1;
		}
		int f=0;
		for(auto it:dt)
		{
			if(it.second>(n/2))
			{
				cout<<it.first<<"\n";
				f=1;
				break;
			}
		}
		if(f==0) cout<<"NO Majority Element"<<"\n";
	}
}
