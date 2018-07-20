#include<bits/stdc++.h>
using namespace std;

int n,m;
int c[1000],a[1000];


int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>c[i];
	for(int i=0;i<m;i++) cin>>a[i];
	
	int curr=0;
	for(int i=0;i<n;i++)
	{
		if(a[curr]>=c[i]) curr+=1;
		if(curr==m) break;
	}
	cout<<curr;
}
