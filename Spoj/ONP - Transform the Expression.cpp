#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack <char> a;
		string s;
		cin>>s;
		for(int i=0;s[i]!='\0';i++)
		{
			if((int)(s[i])>96 && (int)(s[i])<123)
			cout<<s[i];
			else if(s[i]!=')') a.push(s[i]);
			else
			{
				while(a.top()!='(')
				{
					cout<<a.top();
					a.pop();
				}
				a.pop();
			}
		}
		cout<<endl;
	}
	
}
