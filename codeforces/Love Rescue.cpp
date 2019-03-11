#include<bits/stdc++.h>
using namespace std;

int par[26]={0};
vector<pair<char,char> > ans;


int find(int x)
{
	return (par[x]==x?x:find(par[x]));
}

int unite(int x,int y)
{
	par[find(x)]=find(y);
}


int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<26;i++)
		par[i]=i;
	for(int i=0;i<n;i++)
	{
		if(find(s1[i]-'a')!=find(s2[i]-'a'))
		{
			ans.push_back({s1[i]-'a',s2[i]-'a'});
			unite(s1[i]-'a',s2[i]-'a');
		}
	}
	cout<<ans.size()<<"\n";
	for(int i=0;i<ans.size();i++)
	{
		cout<<(char)(ans[i].first+'a')<<" "<<(char)(ans[i].second+'a')<<"\n";
	}
}
