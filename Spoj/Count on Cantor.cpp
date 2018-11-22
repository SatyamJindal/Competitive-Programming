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
		int fin=n;
		int diag=1;
		while((((diag)*(diag+1))/2)<n)
			diag+=1;
		n-=((diag)*(diag-1))/2;
		if(diag%2==0)
		{
			int num=1,den=diag;
			cout<<"TERM "<<fin<<" IS "<<(num+n-1)<<"/"<<(den-n+1)<<"\n";
		}
		else
		{
			int num = diag, den=1;
			cout<<"TERM "<<fin<<" IS "<<(num-n+1)<<"/"<<(den+n-1)<<"\n";
		}
	}
} 
