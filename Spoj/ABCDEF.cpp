#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<int> left;
	vector<int> right;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) for(int k=0;k<n;k++)
	{
		left.push_back(a[i]*a[j]+a[k]);
	}
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) for(int k=0;k<n;k++)
	{
		if(a[i]!=0)
		right.push_back(a[i]*(a[j]+a[k]));
	}
	sort(right.begin(),right.end());
	int count=0;
	//for(int i=0;i<left.size();i++) cout<<left[i]<<" ";
	//cout<<"\n";
	//for(int i=0;i<right.size();i++) cout<<right[i]<<" ";
	
	for(int i=0;i<left.size();i++)
	{
		int lo = lower_bound(right.begin(),right.end(),left[i])-right.begin();
		int hi = upper_bound(right.begin(),right.end(),left[i])-right.begin();
		count+=(hi-lo);
	}
	cout<<count<<"\n";
	
}
