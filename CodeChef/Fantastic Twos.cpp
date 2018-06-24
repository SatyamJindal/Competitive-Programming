#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int all=0;
	for(int i=0;i<n;i++)
	{
		ll ele;
		cin>>ele;
		if(ele!=1 && __builtin_popcount(ele)<=2) all+=1;
	}
	cout<<all<<"\n";
}
