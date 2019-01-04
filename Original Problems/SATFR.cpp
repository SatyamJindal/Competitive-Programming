/*  (MEDIUM)
Satyam meets his friend (SATFR)
-----------------------------------------------

Satyam wants to meet hs friends who live in different cities and decides to look at the map to find the exact location of hs friends. Suddenly he wonders if an entire city was removed, would he still be able 
to reach his friend's house? Now satyam is interested to know all the cities which if not there would leave no other way to reach from any one city to the other.
Look at the test cases for a better understanding.

Input

First line contains an integer T which denotes the test cases.
Every test case contains two values n ( Number of citites ) and m ( Number of bi-directional links between citites)
Next m lines contains two values u and v which means that city "u" is connected to city "v"

Output
Print all the ctites in ascending order separated by a space.

Constraints
1<=T<=1000
1<=n,m<=100

Example

Input
3
3 2
1 2
1 3
4 3
1 2
2 3
3 4
3 3
1 2
2 3
3 1
Output
1
2 3
-1

Exaplanation: - 

For the first test case the graph looks something like: 

                  1
                '   '
               '      '
              2        3

So if city "1" is removed, there is no way to reach from city 2-->3 which previously existed.



*/

#include<bits/stdc++.h>
using namespace std;

const int M = 1e6+6;

vector<int> g[M];

int parent[M];
int child[M];
int low[M];
int tim[M];
bool seen[M];
bool is_cut[M];



void dfs(int s,int c)
{
	seen[s]=true;
	low[s] = tim[s] = c++;
	
	for(int i=0;i<g[s].size();i++)
	{
		int curr = g[s][i];
		if(curr==parent[s]) continue;
		
		if(!seen[curr])
		{
			child[s]+=1;
			parent[curr]=s;
			dfs(curr,c);
			
			
			low[s] = min(low[s],low[curr]);
			
			if((low[curr]>=tim[s] && parent[s]!=-1) || (parent[s]==-1 && child[s]>1))
			{
				is_cut[s]=true;
			}
		}
		else
		{
			low[s] = min(low[s],tim[curr]);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int c=0;
	int n,m,t;
	cin>>t;
	while(t--)
	{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	parent[1]=-1;
	dfs(1,c);
	
	
	set<int> final;
	for(int i=1;i<=n;i++)
	{
		if(is_cut[i]) final.insert(i);
		
	}
	for(auto i:final) cout<<i<<" ";
	if(final.size()==0) cout<<-1;
	cout<<"\n";
	for(int i=0;i<1000;i++)
	{
		g[i].clear(); parent[i]=0; child[i]=0; low[i]=0; tim[i]=0; seen[i]=false; is_cut[i]=false;
	}
	}	
	
}
