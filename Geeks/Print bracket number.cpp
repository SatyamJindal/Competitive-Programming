#include<bits/stdc++.h>
using namespace std;


/*
3?
(a+(b*c))+(d/e)?
((())(()))
((((()

1 2 2 1 3 3
1 2 3 3 2 4 5 5 4 1
1 2 3 4 5 5 
*/


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c1=1;
		string s;
		cin>>s;
		stack<int> st;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
			{
				st.push(c1);
				cout<<c1<<" ";
				c1+=1;
			}
			else if(s[i]==')')
			{
				cout<<st.top()<<" ";
				st.pop();
			}
		}
		cout<<"\n";
	}
}
