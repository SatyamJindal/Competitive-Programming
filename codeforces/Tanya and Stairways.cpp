#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=1;
	cin>>n;
	int a[n];
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			ans.push_back(count);
			count=1;
		}
		else
		{
			count+=1;
		}
	}
	ans.push_back(count);
	cout<<ans.size()-1<<"\n";
	for(int i=1;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
}
