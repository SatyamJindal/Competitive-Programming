#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > edges(1000);

int main(){
	std::ios_base::sync_with_stdio(0);
	  edges.clear();
		int n, m;
		cin>>n>>m;	
		edges.clear();
		for(int i=0;i<m;i++){
			int u, v;
			cin>>u>>v;
			edges[u].push_back(v);
			edges[v].push_back(u);
		}
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
		    int a,b;
		    cin>>a>>b;
		    int flag=0;
		    for(int i=0;i<(int)edges[a].size();i++)
		    {
		        if(edges[a][i]==b)
		        {
		            flag=1;
		            break;
		        }
		    }
		    if(flag==1) cout<<"YES"<<"\n";
		    else cout<<"NO"<<"\n";
		}
}
