#include<bits/stdc++.h>
using namespace std;

int pre[100001];


int main()
{
	memset(pre,0,sizeof(pre));
	for(int i=1;i<=100001;i++)
	{
		int dig=i%10;
		if(dig==2 || dig==3 || dig==9) pre[i] = pre[i-1]+1;
		else pre[i] = pre[i-1];
	}
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		cout<<pre[r]-pre[l-1]<<"\n";
	}
}
