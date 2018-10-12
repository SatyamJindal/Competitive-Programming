#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	map<int,pair<char,int> > left;
	map<int,pair<char,int> > right;
	int le=1,ri=1;
	while(q--)
	{
		char type;
		int ele;
		cin>>type>>ele;
		if(type=='L')
		{
			left[ele] = {'L',le};
			le+=1;
		}
		else if(type=='R')
		{
			right[ele]  = {'R',ri};
			ri+=1;
		}
		
		else
		{
			if(left.find(ele)!=left.end())
			{
				int reml = left.size()-left[ele].second;
				int remr = left[ele].second + right.size()-1;
				cout<<min(max(0,reml),max(0,remr))<<"\n";
			}
			else
			{
				int remr = right.size()-right[ele].second;
				int reml = right[ele].second + left.size()-1;
				cout<<min(max(0,remr),max(0,reml))<<"\n";
			}
		}
	}
	
}
