#include<bits/stdc++.h>
using namespace std;


int main()
{
	freopen("A-large-practice.in","r",stdin);
	freopen("A-large-output.txt","w",stdout);
	int t;
	cin>>t;

	for(int T=1;T<=t;T++)
	{
		int final[5001];
		memset(final,0,sizeof(final));
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int l,r;
			cin>>l>>r;
			final[l]+=1;
			final[r+1]-=1;
		}
		for(int i=1;i<5001;i++)
		{
			final[i]+=final[i-1];
		}
		int p;
		cin>>p;
		int b[p];
		for(int i=0;i<p;i++)
		{
			cin>>b[i];	
		}
		cout<<"Case #"<<T<<": ";
		for(int i=0;i<p;i++) 
		{
			cout<<final[b[i]]<<" ";
		}
		cout<<"\n";
		
	}
	fclose(stdin);
	fclose(stdout);
}
