#include<bits/stdc++.h>
using namespace std;

int f[30];

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	f[1]=1; f[2]=1;
	for(int i=3;i<22;i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	for(int i=1;i<=n;i++)
	{
		bool is=false;
		for(int j=1;j<22;j++)
		{
			if(f[j]==i)
			{
				is=true;
				break;
			}
		}
		if(is) cout<<"O";
		else cout<<"o";
	}
}
