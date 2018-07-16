#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int max_sum=-101;
		int a[n];
		int neg=1;
		for(int i=0;i<n;i++)
		{
		 cin>>a[i];
		 if(a[i]>=0) neg=0;
		}
		int temp=0;
		for(int i=0;i<n;i++)
		{
			temp+=a[i];
			if(temp<0) temp=0;
			max_sum=max(max_sum,temp);
		}
		//cout<<"neg "<<neg<<"\n";
		if(neg==1) cout<<a[max_element(a,a+n)-a]<<"\n";
		else cout<<max_sum<<"\n";
	}
}
