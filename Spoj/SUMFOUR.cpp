#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,temp;
int a[4000],b[4000],c[4000],d[4000];
unordered_map<int,int> mp;



int main()
{
	scanf("%d",&n);
	mp.reserve(16000000);
	for(int i=0;i<n;i++)
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			mp[c[i]+d[j]]++;
	int ans=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			temp = -(a[i]+b[j]);
			if(mp.find(temp)!=mp.end())
				ans+=mp[temp];	
		}
	
	printf("%d\n",ans);
	
}
