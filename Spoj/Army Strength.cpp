#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		cout<<"\n";
		int ng,nm,x;
		cin>>ng>>nm;
		priority_queue<int, vector<int>, greater<int> > gd;
		priority_queue<int, vector<int>, greater<int> > mgd;
		for(int i=0;i<ng;i++)
			cin>>x,gd.push(x);
		for(int i=0;i<nm;i++)
			cin>>x,mgd.push(x);
		while(gd.size()>0 && mgd.size()>0)
		{
			int g = gd.top();
			int mg = mgd.top();
			if(g<mg)
				gd.pop();
			else if(mg<g)
				mgd.pop();
			else
				mgd.pop();	
		}
		if(mgd.size()==0)
			cout<<"Godzilla"<<"\n";
		else if(gd.size()==0)
			cout<<"MechaGodzilla"<<"\n";
		else 
			cout<<"uncertain"<<"\n";
	}
} 
