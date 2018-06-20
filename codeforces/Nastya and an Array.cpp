#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	set<int> a;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x!=0) a.insert(x);
	}
	cout<<a.size()<<"\n";
}
