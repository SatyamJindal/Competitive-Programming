#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int l;
		cin>>l;
		int upper[l-1],lower[l-1];
		for(int i=0;i<l-1;i++) cin>>upper[i];
		for(int i=0;i<l-1;i++) cin>>lower[i];
		int max1=0;
		for(int i=0;i<l-1;i++)
		{
			upper[i]-=(l-i-1);
			lower[i]-=(l-i-1);
			max1 = max(max1,max(upper[i],lower[i]));
		}
		cout<<l+max1<<"\n";
	}
}
