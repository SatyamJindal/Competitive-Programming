#include<bits/stdc++.h>
using namespace std;

string con = "0123456789ABCDEF";
int base=16;


int val[2000005];

void pre()
{
	for(int i=1;i<2000005;i++)
	{
		int num=i;
		string ans="";
		while(num>=16)
		{
			ans+=con[num%base];
			num = num/base;
		}
		ans+=con[num];
		int ct=0;
		
		for(auto c:ans)
		{
			if(c-'A'>=0)
				ct+=1;
		}
		val[i]=ct;
	}
	for(int i=1;i<2000005;i++)
		val[i]+=val[i-1];
	
}


int main()
{
	ios_base::sync_with_stdio(false);
	pre();
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<val[b]-val[a-1]<<"\n";
	}
}
