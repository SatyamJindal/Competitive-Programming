#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n!=0)
	{
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		stack<int> st;
		
		ll ma=0;
		int tp,i=0;
		ll curr_top;
		
		while(i<n)
		{
			if(st.empty() || a[st.top()]<=a[i])
				st.push(i++);
			else
			{
				tp = st.top();
				st.pop();
				
				curr_top = a[tp] * (st.empty() ? i: i-st.top()-1);
				ma = max(ma,curr_top);
			}
		}
		while(!st.empty())
		{
			tp=st.top();
			st.pop();
			curr_top = a[tp] * (st.empty() ? i:i-st.top()-1);
			ma = max(ma,curr_top);
		}
		cout<<ma<<"\n";
		cin>>n;
		
	}
}
