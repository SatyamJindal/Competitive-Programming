#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	if(n==1 || n==2)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes"<<"\n";
		vector<int> first;
		vector<int> second;
		for(int i=1;i<=n/2;i++)
		{
			if(i%2==0)
			{
				first.push_back(i);
				first.push_back(n-i+1);
			}
			else
			{
				second.push_back(i);
				second.push_back(n-i+1);
			}
		}
		if(n%2!=0) first.push_back(n/2+1);
		cout<<first.size()<<" ";
		for(int i=0;i<first.size();i++) cout<<first[i]<<" ";
		cout<<"\n";
		cout<<second.size()<<" ";
		for(int i=0;i<second.size();i++) cout<<second[i]<<" ";
		
	}
}
