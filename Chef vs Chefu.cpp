#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		if(n%4) cout<<"Chefu"<<"\n";
		else cout<<"Chef"<<"\n";
	}
}
