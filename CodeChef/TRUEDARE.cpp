#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		set<int> rt,rd;
		int tr,dr,x,ts,ds;
		cin>>tr;
		for(int i=0;i<tr;i++)
		{
			cin>>x;
			rt.insert(x);
		}
		cin>>dr;
		for(int i=0;i<dr;i++)
		{
			cin>>x;
			rd.insert(x);
		}
		bool ram = false;
		cin>>ts;
		vector<int> trus(ts);
		for(int i=0;i<ts;i++) cin>>trus[i];
		for(int i=0;i<ts;i++)
		{
			if(rt.find(trus[i])==rt.end())
			{
				ram = true;
				break;
			}
		}
		cin>>ds;
		vector<int> dars(ds);
		for(int i=0;i<ds;i++) cin>>dars[i];
		if(!ram)
		{
			for(int i=0;i<ds;i++)
			{
				if(rd.find(dars[i])==rd.end())
				{
					ram=true;
					break;
				}
			}
		}
		if(!ram) cout<<"yes"<<"\n";
		else cout<<"no"<<"\n";
		
		
	}
}
