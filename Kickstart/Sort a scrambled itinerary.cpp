#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("C-large-practice.in","r",stdin);
	freopen("C-large-output.txt","w",stdout);
	
	int t;
	cin>>t;
	
	for(int I=1;I<=t;I++)
	{
		int n;
		cin>>n;
		map<string,int> start;
		map<string,string> mp1;
		map<string,int> mp2;
		string s1,s2;
		for(int i=0;i<n;i++)
		{
			cin>>s1>>s2;
			mp1[s1] = s2;
			mp2[s1]+=1;
			mp2[s2]+=1;
			start[s1]+=1;
		}
		string curr;
		for(auto val: start)
		{
			if(mp2[val.first]==1)
			{
				curr = val.first;
				break;	
			} 
		}
		cout<<"Case "<<"#"<<I<<": ";
		int ct=n;
		while(n--)
		{
			cout<<curr<<"-"<<mp1[curr]<<" ";
			curr = mp1[curr];
		}
		cout<<"\n";
	}
}
