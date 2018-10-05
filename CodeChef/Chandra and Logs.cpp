#include<bits/stdc++.h>
using namespace std;

vector<long> a(1e6+7,1);

int main()
{
	ios_base::sync_with_stdio(false);
	a[0]=0; a[1]=0;
	for(int i=2;i*i<1e6+7;i++)
	{
		if(a[i])
		{
			for(int j=i*2;j<1e6+7;j+=i)
			{
				a[j]=0;
			}
		}
	}
	for(int i=1;i<1e6+7;i++) a[i]+=a[i-1];
	
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		cout<<a[n]<<"\n";
	}
}
