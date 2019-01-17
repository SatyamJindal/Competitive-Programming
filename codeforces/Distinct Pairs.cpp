#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int ind_min = min_element(a.begin(),a.end())-a.begin();
	int ind_max = max_element(b.begin(),b.end())-b.begin();
	for(int i=0;i<m;i++)
		cout<<ind_min<<" "<<i<<"\n";
	for(int i=0;i<n;i++)
	{
		if(i!=ind_min)
			cout<<i<<" "<<ind_max<<"\n";
	}
}
