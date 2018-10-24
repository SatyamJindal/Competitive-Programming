#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n!=0)
	{
		cout<<((n)*(n+1)*(2*n+1))/6<<"\n";
		cin>>n;
	}
}
