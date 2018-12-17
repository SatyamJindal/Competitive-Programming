#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
	int num,num1,t=1,t1=1;
	while(t<=b)
		t*=10;
	while(t1<=a)
		t1*=10;
	return ((a*t+b)>=(a+b*t1));
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		string ans;
		for(int i=0;i<n;i++)
		{
			int val=a[i];
			string curr;
			while(val)
			{
				curr+=((val%10) + '0');
				val/=10;
			}
			reverse(curr.begin(),curr.end());
			ans+=curr;
		}
		cout<<ans<<"\n";
	}
}
