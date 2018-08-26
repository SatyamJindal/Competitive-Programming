#include<bits/stdc++.h>
using namespace std;

int n;

void check(int k,int a[],int b[])
{
	for(int i=1;i<n;i++)
	{
		if(a[i]%k==0 || b[i]%k==0)
			continue;
		return;
	}
	cout<<k;
	exit(0);
}

void factorize(int k,int a[],int b[])
{
	vector<int> v;
	for(int i=2;i*i<=k;i++)
	{
		int ct=0;
		while(k%i==0)
		{
			k/=i;
			ct+=1;
		}
		if(ct>0)
				v.push_back(i);
	}
	if(k>1)
			v.push_back(k);
	//for(auto it:v) cout<<it<<" ";
	//cout<<"\n";
	for(auto &it:v)
	{
		check(it,a,b);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	//int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	factorize(a[0],a,b);
	factorize(b[0],a,b);
	cout<<-1;
	
}
