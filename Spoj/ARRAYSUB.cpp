#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int k;
	cin>>k;
	multiset<int> ms;
	int l=0,r=0;
	while(r<n)
	{
		if(r<k-1)
		{
			ms.insert(a[r]);
			r+=1;
		}
		else
		{
			ms.insert(a[r]);
			cout<<*ms.rbegin()<<" ";
			ms.erase(ms.find(a[l]));
			l+=1;
			r+=1;
		}
	}
}
