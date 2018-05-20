#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum1=0,sum2=0,x;
	for(int i=0;i<7;i++)
	{
		cin>>x;
		sum1+=x;
	}
	for(int i=0;i<7;i++)
	{
		cin>>x;
		sum2+=x;
	}
	if(sum1>sum2) cout<<"cse";
	else if(sum1<sum2) cout<<"mech";
	else cout<<"draw";
}
