#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	priority_queue<long long> pq;
	for(int i=0;i<n;i++)
	{
		long long u;
		cin>>u;
		pq.push(u);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			int ele;
			cin>>ele;
			pq.push(ele);
		}
		else
		{
			cout<<pq.top()<<"\n";
		}
	}
}
