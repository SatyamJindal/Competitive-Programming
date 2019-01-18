#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll prime[1000005];
vector<ll> primes;

//Find all primes
void sieve()
{
	prime[0]=1;
	prime[1]=1;
	int st=2;
	while(st*st<=1000005)
	{
		if(prime[st]==0)
		{
			for(int i=st*2;i<1000005;i+=st)
				prime[i]=1;
		}
		st+=1;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	sieve();
	//Insert into a vector
	for(int i=0;i<1000005;i++)
	{
		if(prime[i]==0)
			primes.push_back(i);
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==3)
			cout<<6<<" "<<10<<" "<<15<<"\n";
		else
		{
			vector<ll> ans;
			int fl=4,ch=0;
			//Four conditions
			while(ans.size()!=n-2)
			{
				if(ch==0)
					ans.push_back(2*primes[fl]);
				else if(ch==1)
					ans.push_back(2*primes[fl+1]);
				else if(ch==2)
					ans.push_back(3*primes[fl]);
				else if(ch==3)
					ans.push_back(3*primes[fl+1]);
				if(ans.size()%2==0)
					fl+=1;
				ch = (ch+1)%4;
			}
			//Last two elements
			if(n%2==0)
				ans.push_back(5*primes[fl]);
			else
			{
				if(ch>=2)
					ans.push_back(15);
				else
					ans.push_back(10);
			}
			ans.push_back(55);
			for(auto i:ans)
				cout<<i<<" ";
		}
		
	}
}
