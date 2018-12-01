#include<bits/stdc++.h>
using namespace std;


vector<int> knapsack(int W,vector<int> wt,vector<int> val,int n)
{
	int dp[n+1][W+1];
	memset(dp,0,sizeof(dp));
	
	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=W;w++)
		{
			if(i==0 || w==0)
				dp[i][w]=0;
			else if(wt[i-1]<=w)
				dp[i][w] = max(dp[i-1][w],val[i-1]+dp[i-1][w-wt[i-1]]);
			else
				dp[i][w] = dp[i-1][w];
		}
	}
	int maxi = dp[n][W],ind=-1;
	for(int i=0;i<=W;i++)
	{
		if(maxi==dp[n][i])
		{
			ind=i;
			break;
		}
	}
	vector<int> ans;
	ans.push_back(ind);
	ans.push_back(maxi);
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int W,n;
	cin>>W>>n;
	
	while(W!=0 && n!=0)
	{
		vector<int> wt(n,0),val(n,0);
		for(int i=0;i<n;i++)
		{
			int u,v;
			cin>>u>>v;
			wt[i]=u;
			val[i]=v;
		}
		
		vector<int> ans = knapsack(W,wt,val,n);
		cout<<ans[0]<<" "<<ans[1]<<"\n";
		cin>>W>>n;
	}
}
