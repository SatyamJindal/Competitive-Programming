#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	
	long maxi = -1;
	for(int i=0;i<n;i++)
	{
		long a,b;
		cin>>a>>b;
		maxi = max(maxi,a+b);
	}
	cout<<maxi;
}
