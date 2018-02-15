#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x,y;
	cin>>x>>y;
	if(y==0 || x-y+1<0) cout<<"No";
	else if(y==1 && x==0) cout<<"Yes";
	else if(y==1 && x>0) cout<<"No";
	else if((x-y+1)%2==0) cout<<"Yes";
	else cout<<"No";
}
