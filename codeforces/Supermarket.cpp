#include<bits/stdc++.h>
using namespace std;

int main()
{
	double mini=1<<20;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		double cost = ((double)a/b)*m;
		//cout<<"cost "<<cost<<"\n";
		mini = min(mini,cost);
	}
	printf("%.10lf",mini);
}
