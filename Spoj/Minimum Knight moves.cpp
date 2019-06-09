#include<bits/stdc++.h>
using namespace std;

int dp[8][8];
bool vis[8][8];

int lt[8] = {-2, -1, -2, -1, 2, 1, 2, 1};
int rt[8] = {-1, -2, 1, 2, -1, -2, 1, 2};

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--)
	{
		memset(dp,0,sizeof(dp));
		memset(vis,0,sizeof(vis));
		string s1,s2;
		cin>>s1>>s2;
		queue<pair<int,int> > q;
		q.push({s1[0]-'a',s1[1]-'0'-1});
		vis[s1[0]-'a'][s1[1]-'0'-1]=1;
		
		while(!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			vis[x][y]=1;
			q.pop();
			for(int i=0;i<8;i++)
			{
				int x1 = x+lt[i];
				int y1 = y+rt[i];
				if(x1>=0 && x1<=7 && y1>=0 && y1<=7)
				{
					if(!vis[x1][y1])
					{
						dp[x1][y1] = dp[x][y]+1;
						q.push({x1,y1});
					}
				}
			}
		}
		
		cout<<dp[s2[0]-'a'][s2[1]-'0'-1]<<"\n";		
	}
}
