#include<bits/stdc++.h>
using namespace std;

int a,b;

int main()
{
	ios_base::sync_with_stdio(false);
	cin>>a>>b;
	int dist = abs(b-a);
	if(dist==1) cout<<1;
	else
	{
		int walk = dist/2;
		if(dist%2==0) cout<<(walk)*(walk+1);
		else cout<<(walk)*(walk+1) + (walk+1);
	}
}
