#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		bool value = next_permutation(a,a+n);
		if(value==false) cout<<-1<<endl;
		else 
		{
			for(int i=0;i<n;i++) cout<<a[i];
		}
		cout<<endl;
	}
}
