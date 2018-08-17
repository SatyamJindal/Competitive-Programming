#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int t;
	cin>>t;
	
	while(t--)
	{
		int max_num=0;
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-k+1;i++)
		{
			int curr=0;
			for(int j=i;j<i+k;j++)
			{
				curr+=a[j];
			}
			max_num = max(max_num,curr);
		}
		cout<<max_num<<"\n";
	}
}
