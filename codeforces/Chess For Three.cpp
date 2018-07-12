#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=0;
	int curr1=1,curr2=2,spec=3;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x==spec)
		{
			flag=1;
		}
		else
		{
			if(x==curr1)
			{
				swap(spec,curr2);
			}
			else
			{
				swap(spec,curr1);
			}
		}
	}
	if(flag==1) cout<<"NO";
	else cout<<"YES";
}
