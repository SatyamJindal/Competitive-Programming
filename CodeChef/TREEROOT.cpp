#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int id1,sum1;
		int id=0,sum2=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>id1>>sum1;
			id+=id1;
			sum2+=sum1;
		}
		cout<<id-sum2<<endl;
	}
}
