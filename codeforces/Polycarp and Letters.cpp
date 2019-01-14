#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string s;
	cin>>s;
	set<char> st;
	int ans=0;
	for(char c:s)
	{
		if(c-'a'<0)
			st.clear();
		else
		{
			st.insert(c);
			int sz = st.size();
			ans = max(ans,sz);
		}
	}
	cout<<ans<<"\n";
}
