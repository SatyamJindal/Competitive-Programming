#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	freopen("A-large-practice.in","r",stdin);
	freopen("A-large-output.txt","w",stdout);
	
	int t;
	cin>>t;
	
	for(int I=1;I<=t;I++)
	{
		int n,ans=0;
		cin>>n;
		string a,b,ad1,ad2;
		cin>>a>>b;
		set<string> first;
		multiset<string> second;
		for(int i=0;i<n;i++)
		{
			ad1=b[i];
			ad2=a[i];
			first.insert(ad1);
			second.insert(ad2);
			for(int j=i+1;j<n;j++)
			{
				ad1+=b[j];
				ad2+=a[j];
				sort(ad1.begin(),ad1.end());
				sort(ad2.begin(),ad2.end());
				first.insert(ad1);
				second.insert(ad2);
			}
		}
		for(auto i: second)
		{
			if(first.find(i)!=first.end()) ans+=1;
		}
		cout<<"Case #"<<I<<": "<<ans<<"\n";
		
	}
	
}
