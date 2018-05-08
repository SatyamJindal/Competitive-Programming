#include<bits/stdc++.h>
using namespace std;


int ans[1000005];

int main()
{
	std::ios_base::sync_with_stdio(false);
	//memset(div,1,sizeof(div));
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1;i<=a*b*c;i++)
	for(int j=i;j<=a*b*c;j+=i) ans[j]++;
	long long res=0;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			for(int k=1;k<=c;k++)
			{
				res+=ans[i*j*k]%1073741824;
			}
		}
	}
	cout<<res%1073741824<<"\n";
}
