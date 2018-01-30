#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
int par[100005];
long long int sz[100005];
 
int find(int x){
	return par[x]=(par[x]==x)?x:find(par[x]);
}
 
int unite(int x, int y){
	if(find(x)<find(y)){
		par[find(y)]=find(x);
	}
	else{
		par[find(x)]=find(y);
	}
}
 
int main(){
	int t;
	std::ios_base::sync_with_stdio(false);
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			par[i]=i;
			sz[i]=0;
		}
		
		for(int i=1;i<=m;i++){
			int a,b;
			cin>>a>>b;
			unite(a,b);
		}
		long long int ans=1;
		long long int no=0;
		for(int i=1;i<=n;i++){
			sz[find(i)]++;
			if(find(i)==i){
				no++;
			}
		}
		
		for(int i=1;i<=n;i++){
			if(sz[i]>0)ans*=sz[i];
			ans%=MOD;
		}
		cout<<no<<" "<<ans<<"\n";
	}
} 
