#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,t,x,y,z;
		cin>>n>>t>>x>>y>>z;
		
		if(t==1)
		{
			if(x<y && y==z && y==n)
				cout<<1<<" "<<(2*n+1)<<"\n";
			else if(x>y && y<z)
			{
				int t1 = ((y+1)/__gcd(y+1,2*n+1));
				int t2 = ((2*n+1)/__gcd(x,2*n+1));
				cout<<t1<<" "<<t2<<"\n";
			}
			else if(x<y && y<z)
			{
				int t1 = ((2*n+1-z)/__gcd(2*n+1-z,2*n+1));
				int t2 = (2*n+1)/__gcd(2*n+1-z,2*n+1);
				cout<<t1<<" "<<t2<<"\n";
			}
			else if(x<y && y>z)
			{
				int t1 = x/__gcd(x,2*n+1);
				int t2 = (2*n+1)/__gcd(x,2*n+1);
				cout<<t1<<" "<<t2<<"\n";
			}
			else if(x>y && y>z)
			{
				int t1 = (2*n+1-z)/__gcd(2*n+1-z,2*n+1);
				int t2 = (2*n+1)/__gcd(2*n+1-z,2*n+1);
				cout<<t1<<" "<<t2<<"\n";
			}
		}
		else if(t==2)
		{
			if((x<y && y<z) || (x>y && y>x))
			{
				int t1 = (2*n+1-(2*y))/__gcd(2*n+1-(2*y),2*n+1);
				int t2 = (2*n+1)/__gcd(2*n+1-2*y,2*n+1);
				cout<<t1<<" "<<t2<<"\n";
			}
			else if(x<y && y==z && y==n)
				cout<<1<<" "<<(2*n+1)<<"\n";
		}
		else if(t==3)
		{
			int t1=-1,t2=-2;
			if(x==y && y>z && y==n)
			{
				t1 = y/__gcd(y,2*n+1);
				t2 = (2*n+1)/__gcd(y,2*n+1);
			}
			else if(x>y && y>z)
			{
				t1 = (2*n+1-x)/__gcd(2*n+1-x,2*n+1);
				t2 = (2*n+1)/__gcd(2*n+1-x,2*n+1);
			}
			else if(x>y && y<z)
			{
				t1 = x/__gcd(x,2*n+1);
				t2 = (2*n+1)/__gcd(x,2*n+1);
			}
			else if(x<y && y>z)
			{
				t1 = x/__gcd(x,2*n+1);
				t2 = (2*n+1)/__gcd(x,2*n+1);
			}
			else if(x<y && y<z)
			{
				t1 = (2*n+1-x)/__gcd(2*n+1-x,2*n+1);
				t2 = (2*n+1)/__gcd(2*n+1-x,2*n+1);
			}
			cout<<t1<<" "<<t2<<"\n";
		}
		else
		{
			if(x==y && y>z && y==n)
				cout<<1<<" "<<2*n+1<<"\n";
			else if((x<y && y<z) || (z>y && y>z))
			{
				int t1=(2*n+1-(2*y))/__gcd(2*n+1-(2*y),2*n+1);
				int t2 = (2*n+1)/__gcd(2*n+1-(2*y),2*n+1);
				cout<<t1<<" "<<t2<<"\n";
			}
		}
	}
}
