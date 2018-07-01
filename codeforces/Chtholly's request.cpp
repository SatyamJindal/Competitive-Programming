#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	long long p;
	cin>>k>>p;
	long long res=0;
	for(int i=1;i<=k;i++)
	{
		long long ini=i;
		long long cop=i;
		while(cop)
		{
			ini = ini*10 + cop%10;
			cop/=10;
		}
		res+=ini;
		res%=p;
	}
	cout<<res;
}
