#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n/2);
	for(int i=0;i<n/2;i++) cin>>a[i];
	sort(a.begin(),a.end());
	int eve=0,odd=0,ae=2,ao=1;
	for(int i=0;i<a.size();i++)
	{
		eve+=abs(a[i]-ae);
		odd+=abs(a[i]-ao);
		ae+=2; ao+=2;
	}
	cout<<min(eve,odd);
}
