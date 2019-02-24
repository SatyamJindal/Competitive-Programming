#include<bits/stdc++.h>
using namespace std;

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
		sort(a,a+n);
		int curr=0;
		for(int i=0;i<n;i++)
		{
			if(curr<a[i])
				break;
			else
				curr+=1;
		}
		cout<<curr<<"\n";
		
	}
}
