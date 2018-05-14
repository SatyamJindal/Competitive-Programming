#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,count=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i]; 
		cin>>k;
		stack<int> st;
		st.push(a[0]);
		for(int i=1;i<n;i++)
		{
			while(!st.empty() && st.top()<a[i] && count<k)
			{
				st.pop();
				count+=1;
			}
			st.push(a[i]);
		}
		vector<int> b;
		while(!st.empty())
		{
			b.push_back(st.top());
			st.pop();
		}
		for(int i=b.size()-1;i>-1;i--) cout<<b[i]<<" ";
		cout<<"\n";
		//cout<<"hey";
		//for(int i=0;i<p;i++) cout<<b[i]<<" ";
	}
}


