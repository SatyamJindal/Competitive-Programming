#include<bits/stdc++.h>
using namespace std;
 
struct trie
{
	map<int,trie*> child;
	bool eow=false;
};
 
void insert(string num,trie *head,bool &k)
{
	trie *temp = head,*j;
	for(auto it:num)
	{
		if(temp->child.find(it-'0')!=temp->child.end())
		{
			temp = (temp->child.find(it-'0')->second);
			if(temp->eow)
				k=false;
		}
		else
		{
			j=new trie;
			temp->child.insert(make_pair(it-'0',j));
			temp=j;
		}	
	}
	temp->eow=true;
	if(!(temp->child.empty()))
		k=false;
	
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		string num;
		trie *head = new trie;
		bool k=true;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			if(k)
				insert(num,head,k);
		}
		if(k)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}
} 
