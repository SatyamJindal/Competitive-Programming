#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		
		if(abs(a-b)!=1) cout<<"NO"<<"\n";
		else
		{
			long long num = a+b;
			bool isprime = true;
			for(long long i=2; i*i<=num;i++)
			{
				if(num%i==0)
				{
					isprime = false;
					break;
				}
			}
			if(isprime) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
	}
	
}
