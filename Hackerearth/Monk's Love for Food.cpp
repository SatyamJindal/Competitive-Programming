#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	stack<long long> st;
	for(int i=0;i<q;i++)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			if(st.size()==0) cout<<"No Food"<<"\n";
			else
			{
				cout<<st.top()<<"\n";
				st.pop();
			}
		}
		else
		{
			long long ele;
			cin>>ele;
			st.push(ele);
		}
	}
}
