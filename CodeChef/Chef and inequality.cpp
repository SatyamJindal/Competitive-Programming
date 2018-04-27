#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		long long count=0;
		for(int i=a;i<=b;i++)
		{
			if(c>i) count+=(d-c+1);
			else if(c<i && d>i) count+=(d-i);
			else if(c==i) count+=(d-c);
		}
		cout<<count<<"\n";
	}
}
